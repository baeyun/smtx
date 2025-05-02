package compiler

import (
	"go/token"

	"github.com/smtx/smtv/ast"
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

func (c *Compiler) CompileScripts(files []*string, config *Config) {
	pkg := &Compiler{
		Config: config,
		Fset:   token.NewFileSet(),
	}

	for _, sf := range pkg.Files {
		CompileSourceFile(sf)
	}

}

func (c *Compiler) AddFile(filename string) {
	sf := BuildSourceFile(filename, nil)
	c.Files = append(c.Files, sf)
}

func (c *Compiler) AddFiles(filename string) {
	sf := BuildSourceFile(filename, nil)
	c.Files = append(c.Files, sf)
}

func CompileSourceFile(sf *ast.SourceFile) {}
