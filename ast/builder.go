package ast

import (
	"fmt"
	"go/parser"
	"go/token"
	"os"

	"github.com/smtx/smtv/utils"
)

func BuildSourceFile(filename string, parser *func(*SourceFile)) *SourceFile {
	src := &SourceFile{
		Path: filename,
		Src:  utils.ReadFileBytes(filename),
	}

	if parser != nil {
		(*parser)(src)
	}
	return src
}

func BuildSourceFileList(filenames []*string, parser *func(*SourceFile)) []*SourceFile {
	var sources []*SourceFile
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

func BuildGoSourceFile(filename string) *SourceFile {
	fset := token.NewFileSet()
	f, err := parser.ParseFile(fset, filename, nil, 0)
	if err != nil {
		panic(fmt.Sprintf("Error parsing file %s: %v", filename, err))
	}

	return &SourceFile{
		Path: filename,
		Fset: fset,
		Ast:  f,
	}
}
