// smt-lib2 prelude API
package prelude

type Expression interface{}

type Option struct {
	ProduceModels                bool
	ProduceProofs                bool
	ProduceUnsatCores            bool
	ProduceInterpolants          bool
	ProduceAssignments           bool
	ProduceModelsOnTimeout       bool
	ProduceProofsOnTimeout       bool
	ProduceUnsatCoresOnTimeout   bool
	ProduceInterpolantsOnTimeout bool
	ProduceAssignmentsOnTimeout  bool
	PrintSuccess                 bool
	PrintFail                    bool
	GlobalDecls                  bool
	ExpandDefinitions            bool
	InteractiveMode              bool
	Incremental                  bool
	RandomSeed                   int
	Verbosity                    int
	DiagnosticOutputChannel      string
	RegularOutputChannel         string
}

func SetOption(option Option) {}

// SMT Logic types
type Logic string

const (
	AUFLIA    Logic = "AUFLIA"
	AUFLIRA   Logic = "AUFLIRA"
	AUFNIRA   Logic = "AUFNIRA"
	LIA       Logic = "LIA"
	LRA       Logic = "LRA"
	QF_ABV    Logic = "QF_ABV"
	QF_AUFBV  Logic = "QF_AUFBV"
	QF_AUFLIA Logic = "QF_AUFLIA"
	QF_AX     Logic = "QF_AX"
	QF_BV     Logic = "QF_BV"
	QF_IDL    Logic = "QF_IDL"
	QF_LIA    Logic = "QF_LIA"
	QF_LRA    Logic = "QF_LRA"
	QF_NIA    Logic = "QF_NIA"
	QF_NRA    Logic = "QF_NRA"
	QF_RDL    Logic = "QF_RDL"
	QF_UF     Logic = "QF_UF"
	QF_UFBV   Logic = "QF_UFBV"
	QF_UFIDL  Logic = "QF_UFIDL"
	QF_UFLIA  Logic = "QF_UFLIA"
	QF_UFLRA  Logic = "QF_UFLRA"
	QF_UFNRA  Logic = "QF_UFNRA"
	UFLRA     Logic = "UFLRA"
	UFNIA     Logic = "UFNIA"
)

func SetLogic(logic Logic) {}

func SetInfo(info string, Expression string) {}

func ResetAssertions() {}

func Reset() {}

func Push(numeral int8) {}

func Pop(numeral int8) {}

func GetValue[T Expression](expr T) {}

func GetUnsatCore() {}

func GetUnsatAssumptions() {}

func GetProof() {}

func GetOption(option string) {}

func GetModel() {}

func GetInfo(info string) {}

func GetAssignment() {}

func GetAssertions() {}

func Exit() {}

func Echo(message string) {}

func CheckSatAssuming(exprs ...Expression) {}

func CheckSat() {}

func Assert[T Expression](expr T) {}

// @TODO: Where are these specified in the SMT-LIB2 standard?
// func GetExpression[T Expression](expr T) {}
// func GetStatistics() {}
