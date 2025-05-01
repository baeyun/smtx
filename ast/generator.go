package ast

import (
	"bytes"
	"fmt"
	"go/ast"
	"go/printer"

	"github.com/smtx/smtv/utils"
)

func Generate(sf *SourceFile) string {
	var buf bytes.Buffer
	printer.Fprint(&buf, sf.Fset, sf.Ast)

	return buf.String()
}

func GenerateFile(sf *SourceFile, filename *string) {
	// @TODO: fix this
	// if filename == nil {
	// 	filename = &sf.Path
	// }

	sourceCode := Generate(sf)
	err := utils.WriteFileBytes(*filename, []byte(sourceCode))
	if err != nil {
		panic(err)
	}
}

func PrintAst(sf *SourceFile) {
	if sf.Ast == nil {
		panic("AST is nil")
	}

	ast.Print(sf.Fset, sf.Ast)
}

func PrintSourceFile(sf *SourceFile) {
	fmt.Println(Generate(sf))
}

func PrintParser(sf *SourceFile) {
	if sf.Parser == nil {
		panic("Parser is nil")
	}
	println(sf.Parser.RootNode().ToSexp())
}

func PrettyPrintParser(sf *SourceFile) {
	if sf.Parser == nil {
		panic("Parser is nil")
	}

	out := utils.PrettySExp(sf.Parser.RootNode().ToSexp())
	println(out)
}
