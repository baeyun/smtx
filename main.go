package main

import (
	"github.com/smtx/smtv/parser"
	"github.com/smtx/smtv/utils"

	arg "github.com/alexflint/go-arg"
)

// #include <stdio.h>
// void hello() {
//    printf("Hello from C")
//}
import "C"

// Command line arguments parser
var CmdArgs struct {
	Files   []string `arg:"positional,required" help:"List of files to check. Supports glob patterns."`
	Verbose bool     `arg:"-v,--verbose" help:"Enable detailed output for debugging or analysis."`
}

func main() {
	arg.MustParse(&CmdArgs)
	filenames := utils.GetFilesToCheck(CmdArgs.Files)
	// particle := parser.TreeSitterParser
	particle := parser.ParticleParser
	parser.NewSourceList(filenames, &particle)

	C.hello()
}
