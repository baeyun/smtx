package compiler

import (
	"fmt"
	"go/token"
	"log"

	gast "go/ast"

	ts "github.com/tree-sitter/go-tree-sitter"

	"github.com/smtx/ast"
	"github.com/smtx/config"
	"github.com/smtx/parser"
	"github.com/smtx/types"
	"github.com/smtx/utils"
)

/**
 * @TODOs
 * - add new import logic
 */

type Config struct {
	Include []string
	Exclude []string
	Logics  []string
	Check   bool // check for type errors
	Verbose bool
}

type DiagnosticType int

const (
	Error DiagnosticType = iota
	SyntaxError
	CompilerError
	InternalError
	TypeError
	Warning
	Info
)

type Diagnostic struct {
	Pos     token.Position
	Message string
	Type    DiagnosticType
}

type Compiler struct {
	Config      *Config
	Fset        *token.FileSet
	Files       []*ast.SourceFile
	Diagnostics []*Diagnostic
}

func NewCompiler() *Compiler {
	return &Compiler{
		Fset: token.NewFileSet(),
	}
}

func NewCompilerFromArgs(args config.CmdArgs) *Compiler {
	filenames := utils.GetFilesToCheck(args.Check.Files)
	c := &Compiler{
		Config: &Config{
			Include: []string{},
			Exclude: []string{},
			Logics:  []string{},
			Check:   true,
			Verbose: args.Verbose,
		},
		Fset: token.NewFileSet(),
	}

	c.CompileScripts(filenames)

	if args.Verbose {
		fmt.Printf("Files: %d\n", len(c.Files))
	}

	return c
}

func (c *Compiler) CompileScripts(filepaths []*string) {
	// @TODO: run in parallel
	for _, f := range filepaths {
		c.CompileSourceFile(*f)
	}
}

func (c *Compiler) CompileSourceFile(filename string) {
	src := utils.ReadFileBytes(filename)
	c.Fset.AddFile(filename, -1, len(src))
	pkg := ast.Ident{
		Name: "main",
	}
	sf := &ast.SourceFile{
		Src:    src,
		Fset:   c.Fset,
		Parser: parser.NewParser(src),
		Ast: &ast.File{
			Name:  &pkg,
			Scope: gast.NewScope(nil),
		},
	}
	sf.Ast.FileStart = token.Pos(0)
	sf.Ast.FileEnd = token.Pos(len(src))

	// scan for parser errors
	parser.WalkParser(sf.Parser.RootNode(), func(node *ts.Node) {
		if node.IsError() && !node.IsExtra() {
			start, _ := node.ByteRange()
			tsPos := node.StartPosition()
			pos := token.Position{
				Filename: filename,
				Offset:   int(start),
				Line:     int(tsPos.Row) + 1,
				Column:   int(tsPos.Column) + 1,
			}
			print(FormatError(&sf.Src, &pos, node.ToSexp()))
		}
	})

	// add main function
	mainFunc := BuildMainFunction(&ast.BlockStmt{
		List: []ast.Stmt{
			&ast.ExprStmt{
				X: &ast.CallExpr{
					Fun: &ast.Ident{
						Name:    utils.ToPascalCase("check-sat"),
						NamePos: token.Pos(1),
					},
				},
			},
		},
	})
	sf.Ast.Decls = append(sf.Ast.Decls, mainFunc)

	// BuildCommands(sf.Parser.RootNode())
	// println("############################################################")
	ast.PrintAst(sf.Ast)
	println("############################################################")
	ast.PrintSourceFile(sf)

	c.Files = append(c.Files, sf)

	// @TODO: !important: prevent leaks
	// defer sf.Parser.Close()
}

// @TODO: check for types for all
func (c *Compiler) CheckTypes() {
	println("############################################################")
	for _, sf := range c.Files {
		_, err := types.CheckSourceFile(sf)
		if err != nil {
			log.Fatal(err)
		}
	}

}

// @TODO: load prelude library from logics and theories
func (c *Compiler) LoadPrelude() {}
