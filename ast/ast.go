package ast

import (
	"go/ast"
	"go/token"

	ts "github.com/tree-sitter/go-tree-sitter"
)

type SourceFile struct {
	Path   string
	Src    []byte
	Fset   *token.FileSet
	Ast    *ast.File
	Parser *ts.Tree
}
