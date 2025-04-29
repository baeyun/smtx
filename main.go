package main

import (
	"fmt"
	"log"

	arg "github.com/alexflint/go-arg"

	ast "github.com/smtx/smtv/ast"
	parser "github.com/smtx/smtv/parser"
	types "github.com/smtx/smtv/types"
	"github.com/smtx/smtv/utils"
)

// Command line arguments parser
var CmdArgs struct {
	Files   []string `arg:"positional,required" help:"List of files to check. Supports glob patterns."`
	Verbose bool     `arg:"-v,--verbose" help:"Enable detailed output for debugging or analysis."`
}

func main() {
	arg.MustParse(&CmdArgs)
	filenames := utils.GetFilesToCheck(CmdArgs.Files)
	parser := parser.NewTreeSitterParser
	sources := ast.BuildSourceFileList(filenames, &parser)

	gosf := ast.BuildGoSourceFile("./tests/hello.go")
	ast.PrintSourceFile(gosf)
	pkg, err := types.TypeCheckSourceFile(gosf)
	if err != nil {
		log.Fatal(err) // type error
	}

	fmt.Printf("Package  %q\n", pkg.Path())
	fmt.Printf("Name:    %s\n", pkg.Name())
	fmt.Printf("Imports: %s\n", pkg.Imports())
	fmt.Printf("Scope:   %s\n", pkg.Scope())

	for _, sf := range sources {
		// ast.PrettyPrintParser(sf)

		// prevent leaks
		defer sf.Parser.Close()
	}
}
