package parser

import (
	"fmt"
	"go/ast"
	"os"

	"github.com/smtx/smtv/utils"
	ts "github.com/tree-sitter/go-tree-sitter"
)

type Source struct {
	Path   string
	Src    []byte
	PreAst *ts.Tree
	Ast    *ast.File
}

func NewSource(filename string, parser *func(*Source)) *Source {
	var src = &Source{
		Path: filename,
		Src:  utils.ReadFileBytes(filename),
		Ast:  nil,
	}

	if parser != nil {
		(*parser)(src)
	}
	return src
}

func NewSourceList(filenames []*string, parser *func(*Source)) []*Source {
	var sources []*Source
	for _, filename := range filenames {
		r, err := os.Open(*filename)
		if err != nil {
			fmt.Printf("Error opening file %s: %v\n", *filename, err)
			continue
		}
		defer r.Close()

		sources = append(sources, NewSource(*filename, parser))
	}
	return sources
}
