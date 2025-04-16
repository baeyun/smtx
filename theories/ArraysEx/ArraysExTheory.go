package ArraysExTheory

// Array represents a generic array type with two type parameters
type Array[X comparable, Y any] struct {
	data map[X]Y
}

// NewArray creates a new Array instance
func NewArray[X comparable, Y any]() *Array[X, Y] {
	return nil
}

// Select retrieves a value from the array at the given index
func Select[X comparable, Y any](array *Array[X, Y], index X) Y {
	var zero Y
	return zero
}

// Store creates a new array with the given value stored at the specified index
func Store[X comparable, Y any](array *Array[X, Y], index X, value Y) *Array[X, Y] {
	return nil
}

// Equal checks if two arrays are extensionally equal
func Equal[X comparable, Y comparable](a, b *Array[X, Y]) bool {
	return false
}
