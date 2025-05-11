package main

import (
	"os"

	arg "github.com/alexflint/go-arg"

	"github.com/smtx/ast"
	"github.com/smtx/compiler"
	"github.com/smtx/config"
)

var CmdArgs config.CmdArgs

func main() {
	parser := arg.MustParse(&CmdArgs)

	// Print the AST of the ast.go test file.
	if CmdArgs.Ast {
		ast_test := compiler.BuildGoSourceFile("./tests/_ast.go")
		ast.PrintAst(ast_test.Ast)
		os.Exit(0)
	}

	if CmdArgs.Check == nil || len(CmdArgs.Check.Files) == 0 {
		// Print usage if no files are provided
		parser.WriteUsage(os.Stderr)
		os.Exit(0)
	}

	compiler.NewCompilerFromArgs(CmdArgs)

	// _, err := types.CheckSourceFile(gosf)
	// if err != nil {
	// 	log.Fatal(err) // type error
	// }

	// fmt.Printf("Files: %d\n", len(c.Files))
}
