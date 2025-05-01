package ast

import (
	"go/ast"
	"go/token"

	ts "github.com/tree-sitter/go-tree-sitter"
)

type Config struct {
	Include      []string
	Exclude      []string
	Logics       []string
	Verbose      bool
	ShowWarnings bool
}

type Script struct {
	Fset   *token.FileSet
	Files  []*SourceFile
	Config *Config
}

type SourceFile struct {
	Src    []byte
	Fset   *token.FileSet
	Ast    *ast.File
	Parser *ts.Tree
}

type (
	File = ast.File
)
