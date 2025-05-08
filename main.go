package main

import (
	"log"
	"os"

	arg "github.com/alexflint/go-arg"

	"github.com/smtx/ast"
	"github.com/smtx/compiler"
	"github.com/smtx/config"
	"github.com/smtx/types"
)

var CmdArgs config.CmdArgs

func main() {
	arg.MustParse(&CmdArgs)

	// Print the AST of the ast.go test file.
	if CmdArgs.Ast {
		ast_test := compiler.BuildGoSourceFile("./tests/_ast.go")
		ast.PrintAst(ast_test)
		os.Exit(0)
	}

	c := compiler.NewCompilerFromArgs(CmdArgs)
	gosf := compiler.BuildGoSourceFile("./tests/_ast.go")

	_, err := types.CheckSourceFile(gosf)
	if err != nil {
		log.Fatal(err) // type error
	}

	println(len(c.Files))
}
