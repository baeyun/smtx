package benchmarks

import (
	"testing"

	ast "github.com/smtx/smtv/ast"
	p "github.com/smtx/smtv/parser"
	types "github.com/smtx/smtv/types"
)

func BenchmarkTypeChecking(b *testing.B) {
	b.Run("TypeChecker", func(b *testing.B) {
		gosf := ast.BuildGoSourceFile("../tests/hello.go")
		b.ReportAllocs()

		for b.Loop() {
			types.TypeCheckSourceFile(gosf)
		}
	})

	b.Run("TypeCheckerPlusSourceBuilder", func(b *testing.B) {
		b.ReportAllocs()

		for b.Loop() {
			gosf := ast.BuildGoSourceFile("../tests/hello.go")
			types.TypeCheckSourceFile(gosf)
		}
	})
}

func BenchmarkParsers(b *testing.B) {
	testFile := "../tests/sample.toml"
	filenames := []*string{&testFile}
	b.Run("TreeSitter", func(b *testing.B) {
		parser := p.NewTreeSitterParserToml
		b.ReportAllocs()

		for b.Loop() {
			ast.BuildSourceFileList(filenames, &parser)
		}
	})

	b.Run("Participle", func(b *testing.B) {
		parser := p.NewParticipleParser
		b.ReportAllocs()

		for b.Loop() {
			ast.BuildSourceFileList(filenames, &parser)
		}
	})

}
