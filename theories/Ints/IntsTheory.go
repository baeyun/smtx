package IntsTheory

// Int represents the SMT Int sort
type Int int64

// Arithmetic Operations
// [smtv.rewrite] = auto
func Negate(x Int) Int {
	return 0
}

// [smtv.rewrite] = auto
func Subtract(x, y Int) Int {
	return 0
}

// [smtv.rewrite] = auto
func Add(x, y Int) Int {
	return 0
}

// [smtv.rewrite] = auto
func Multiply(x, y Int) Int {
	return 0
}

// Euclidean division as per Boute's definition
// [smtv.rewrite] = auto
func Div(m, n Int) Int {
	return 0
}

// Euclidean modulo operation
// [smtv.rewrite] = auto
func Mod(m, n Int) Int {
	return 0
}

// [smtv.rewrite] = auto
func Abs(x Int) Int {
	return x
}

// Comparison Operations
// [smtv.rewrite] = auto
func LessEqual(x, y Int) bool {
	return false
}

// [smtv.rewrite] = auto
func Less(x, y Int) bool {
	return false
}

// [smtv.rewrite] = auto
func GreaterEqual(x, y Int) bool {
	return false
}

// [smtv.rewrite] = auto
func Greater(x, y Int) bool {
	return false
}

// Divisibility check
// [smtv.rewrite] = auto
func Divisible(x Int, n Int) bool {
	return false
}
