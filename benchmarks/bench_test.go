package benchmarks

import (
	"testing"

	p "github.com/smtx/smtv/parser"
)

func BenchmarkParsers(b *testing.B) {
	tomlTestFile := "../tests/sample.toml"
	filenames := []*string{&tomlTestFile}
	b.Run("TreeSitter", func(b *testing.B) {
		parser := p.TreeSitterParserToml
		b.ReportAllocs()

		for b.Loop() {
			p.NewSourceList(filenames, &parser)
		}
	})

	b.Run("Particle", func(b *testing.B) {
		parser := p.ParticleParser
		b.ReportAllocs()

		for b.Loop() {
			p.NewSourceList(filenames, &parser)
		}
	})

}
