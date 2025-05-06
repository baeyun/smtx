package compiler

import (
	"go/token"

	ts "github.com/tree-sitter/go-tree-sitter"

	"github.com/smtx/ast"
	"github.com/smtx/parser"
	"github.com/smtx/utils"
)

/**
 * @TODOs
 * - add new import logic
 */

type Config struct {
	Include      []string
	Exclude      []string
	Logics       []string
	Validate     bool
	Verbose      bool
	ShowWarnings bool
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
		// Config: &Config{
		// 	Include:      []string{},
		// 	Exclude:      []string{},
		// 	Logics:       []string{},
		// 	Validate:     false,
		// 	Verbose:      false,
		// 	ShowWarnings: false,
		// },
		Fset: token.NewFileSet(),
	}
}

func (c *Compiler) CompileScripts(filepaths []*string, config *Config) {
	// @TODO: run in parallel
	for _, f := range filepaths {
		c.CompileSourceFile(*f)
	}
}

func (c *Compiler) CompileSourceFile(filename string) {
	src := utils.ReadFileBytes(filename)
	c.Fset.AddFile(filename, -1, len(src))
	sf := &ast.SourceFile{
		Src:    src,
		Fset:   c.Fset,
		Parser: parser.NewParser(src),
	}

	// ast.PrettyPrintParser(sf)
	parser.WalkParser(sf.Parser.RootNode(), func(node *ts.Node) {
		// println(node.GrammarName())
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

	c.Files = append(c.Files, sf)
}
