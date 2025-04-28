package main

import (
	"fmt"

	p "github.com/smtx/smtv/parser"
	"github.com/smtx/smtv/utils"

	arg "github.com/alexflint/go-arg"
)

// Command line arguments parser
var CmdArgs struct {
	Files   []string `arg:"positional,required" help:"List of files to check. Supports glob patterns."`
	Verbose bool     `arg:"-v,--verbose" help:"Enable detailed output for debugging or analysis."`
}

func main() {
	arg.MustParse(&CmdArgs)
	filenames := utils.GetFilesToCheck(CmdArgs.Files)
	parser := p.TreeSitterParser
	sources := p.NewSourceList(filenames, &parser)

	for _, src := range sources {
		root := src.PreAst.RootNode()
		// fmt.Println(root.Kind())
		fmt.Println(root.ToSexp())

		defer src.PreAst.Close()
	}
}
