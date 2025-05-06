package compiler

import (
	"fmt"
	p "go/parser"
	"go/token"
	"os"

	"github.com/smtx/ast"
	"github.com/smtx/parser"
	"github.com/smtx/utils"
)

// @TODO: use: https://pkg.go.dev/golang.org/x/tools/go/ast/astutil

func BuildSourceFile(filename string) *ast.SourceFile {
	src := utils.ReadFileBytes(filename)
	sf := &ast.SourceFile{
		Src:    src,
		Parser: parser.NewParser(src),
	}
	return sf
}

func BuildSourceFileList(filenames []*string) []*ast.SourceFile {
	var sources []*ast.SourceFile
	for _, filename := range filenames {
		r, err := os.Open(*filename)
		if err != nil {
			fmt.Printf("Error opening file %s: %v\n", *filename, err)
			continue
		}
		defer r.Close()

		sources = append(sources, BuildSourceFile(*filename))
	}
	return sources
}

func BuildGoSourceFile(filename string) *ast.SourceFile {
	fset := token.NewFileSet()
	f, err := p.ParseFile(fset, filename, nil, 0)
	if err != nil {
		panic(fmt.Sprintf("Error parsing file %s: %v", filename, err))
	}

	sf := BuildSourceFile(filename)
	sf.Fset = fset
	sf.Ast = f

	return sf
}
