package config

// Command line arguments
type CmdArgs struct {
	Files   []string `arg:"positional" help:"List of files to check. Supports glob patterns."`
	Ast     bool     `arg:"-a,--ast" help:"Print the AST of the ast.go test file."`
	Verbose bool     `arg:"-v,--verbose" help:"Enable detailed output for debugging or analysis."`
}
