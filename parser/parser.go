package parser

/*
#cgo CFLAGS: -I${SRCDIR}/target/debug
#cgo LDFLAGS: -L${SRCDIR}/target/debug -lsmtx_parser

#include <./bindings.h>
*/
import "C"

func TestBindings() {
	C.greet()
	println(C.add(1, 2))
	println(C.fib(10))

	animal := C.create_animal()
	// println("Animal name:", animal.name)
	println("Animal age:", int(animal.age))
}
