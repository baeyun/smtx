package QF_LIA

import (
	CoreTheory "github.com/smtx/theories/Core"
	IntsTheory "github.com/smtx/theories/Ints"
)

type (
	Int    = IntsTheory.Int
	Common interface {
		CoreTheory.Bool | IntsTheory.Int
	}
)

const (
	False = CoreTheory.False
	True  = CoreTheory.True
)

var (
	Not      = CoreTheory.Not
	Implies  = CoreTheory.Implies
	And      = CoreTheory.And
	Or       = CoreTheory.Or
	Xor      = CoreTheory.Xor
	Distinct = CoreTheory.Distinct[CoreTheory.Bool]
	Ite      = CoreTheory.Ite[CoreTheory.Bool]
	Add      = IntsTheory.Add
	Subtract = IntsTheory.Subtract
	Multiply = IntsTheory.Multiply
	Div      = IntsTheory.Div
)

func Eq[T Common](a, b T) CoreTheory.Bool {
	return CoreTheory.False
}
