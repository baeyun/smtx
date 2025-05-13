package main

import (
	"os"

	arg "github.com/alexflint/go-arg"

	"github.com/smtx/compiler"
	"github.com/smtx/config"
)

var args config.CmdArgs

func main() {
	argParser := arg.MustParse(&args)

	switch {
	case args.Check != nil:
		if len(args.Check.Files) == 0 {
			argParser.WriteUsage(os.Stderr)
			os.Exit(0)
		}

		compiler.NewCompilerFromArgs(args)
		// c.CheckTypes()

	default:
		argParser.WriteUsage(os.Stderr)
	}
}
