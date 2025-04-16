package parser

import "go/ast"

type Source struct {
	source string
	ast    ast.File
}

func NewSource(source string, ast ast.File) *Source {
	return &Source{
		source: source,
		ast:    ast,
	}
}
