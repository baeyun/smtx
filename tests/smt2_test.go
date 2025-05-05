package smtv_test

import (
	"testing"

	. "github.com/smtx/logics/QF_LIA"
	. "github.com/smtx/prelude"
)

func TestMain(m *testing.M) {
	// This is a placeholder for the main function of the core package.
	// In a real implementation, this would contain the core logic of the SMT solver.
	// For now, it does nothing.

	SetOption(Option{ProduceModels: true})

	SetLogic(QF_LIA)
	var x Int = 0
	var y Int = 0
	Assert(Add(x, y))
	Assert(Eq(Subtract(x, y), Add(x, Subtract(y, 1))))
	Exit()
}
