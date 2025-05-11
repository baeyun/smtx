package config

const PKGNAME = "smtx"
const VERSION = "0.1.0"

// Command line arguments
type CmdArgs struct {
	Check   *CheckCmd `arg:"subcommand:check" help:"Check the source files for type errors."`
	Ast     bool      `arg:"-a,--ast" help:"Print the AST of the ast.go test file."`
	Verbose bool      `arg:"-v,--verbose" help:"Enable detailed output for debugging or analysis."`
}

type CheckCmd struct {
	Files []string `arg:"positional" help:"List of files to check. Supports glob patterns."`
}
