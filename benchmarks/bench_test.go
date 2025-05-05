package benchmarks

import (
	"testing"

	"github.com/smtx/compiler"
	p "github.com/smtx/parser"
	"github.com/smtx/types"
)

func BenchmarkTypeChecking(b *testing.B) {
	testFile := "../tests/hello.go"
	b.Run("TypeChecker", func(b *testing.B) {
		gosf := compiler.BuildGoSourceFile(testFile)
		b.ReportAllocs()

		for b.Loop() {
			types.CheckSourceFile(gosf)
		}
	})

	b.Run("TypeCheckerPlusSourceBuilder", func(b *testing.B) {
		b.ReportAllocs()

		for b.Loop() {
			gosf := compiler.BuildGoSourceFile(testFile)
			types.CheckSourceFile(gosf)
		}
	})
}

func BenchmarkParsers(b *testing.B) {
	testFile := "./sample.toml"
	filenames := []*string{&testFile}
	b.Run("TreeSitter", func(b *testing.B) {
		parser := p.NewTreeSitterParserToml
		b.ReportAllocs()

		for b.Loop() {
			compiler.BuildSourceFileList(filenames, &parser)
		}
	})

	b.Run("Participle", func(b *testing.B) {
		parser := p.NewParticipleParser
		b.ReportAllocs()

		for b.Loop() {
			compiler.BuildSourceFileList(filenames, &parser)
		}
	})

}
