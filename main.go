package main

import (
	"log"
	"os"

	arg "github.com/alexflint/go-arg"

	"github.com/smtx/ast"
	c "github.com/smtx/compiler"
	"github.com/smtx/parser"
	"github.com/smtx/types"
	"github.com/smtx/utils"
)

// Command line arguments parser
var CmdArgs struct {
	Files   []string `arg:"positional" help:"List of files to check. Supports glob patterns."`
	Ast     bool     `arg:"-a,--ast" help:"Print the AST of the ast.go test file."`
	Verbose bool     `arg:"-v,--verbose" help:"Enable detailed output for debugging or analysis."`
}

func main() {
	arg.MustParse(&CmdArgs)

	// Print the AST of the ast.go test file.
	if CmdArgs.Ast {
		ast_test := c.BuildGoSourceFile("./tests/ast.go")
		ast.PrintAst(ast_test)
		os.Exit(0)
	}

	filenames := utils.GetFilesToCheck(CmdArgs.Files)
	compiler := c.NewCompiler()
	compiler.CompileScripts(filenames, nil)
	parser := parser.NewTreeSitterParser
	sources := c.BuildSourceFileList(filenames, &parser)
	gosf := c.BuildGoSourceFile("./tests/hello.go")
	// ast.PrintSourceFile(gosf)

	_, err := types.CheckSourceFile(gosf)
	if err != nil {
		log.Fatal(err) // type error
	}

	for _, sf := range sources {
		// ast.PrettyPrintParser(sf)

		// prevent leaks
		defer sf.Parser.Close()
	}
}
