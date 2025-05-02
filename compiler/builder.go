package compiler

import (
	"fmt"
	"go/parser"
	"go/token"
	"os"

	"github.com/smtx/smtv/ast"
	"github.com/smtx/smtv/utils"
)

// @TODO: use: https://pkg.go.dev/golang.org/x/tools/go/ast/astutil

func BuildSourceFile(filename string, parser *func(*ast.SourceFile)) *ast.SourceFile {
	src := &ast.SourceFile{
		Src: utils.ReadFileBytes(filename),
	}

	if parser != nil {
		(*parser)(src)
	}
	return src
}

func BuildSourceFileList(filenames []*string, parser *func(*ast.SourceFile)) []*ast.SourceFile {
	var sources []*ast.SourceFile
	for _, filename := range filenames {
		r, err := os.Open(*filename)
		if err != nil {
			fmt.Printf("Error opening file %s: %v\n", *filename, err)
			continue
		}
		defer r.Close()

		sources = append(sources, BuildSourceFile(*filename, parser))
	}
	return sources
}

func BuildGoSourceFile(filename string) *ast.SourceFile {
	fset := token.NewFileSet()
	f, err := parser.ParseFile(fset, filename, nil, 0)
	if err != nil {
		panic(fmt.Sprintf("Error parsing file %s: %v", filename, err))
	}

	sf := BuildSourceFile(filename, nil)
	sf.Fset = fset
	sf.Ast = f

	return sf
}
