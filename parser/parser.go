package parser

/*
#cgo CFLAGS: -I${SRCDIR}/target/debug
#cgo LDFLAGS: -L${SRCDIR}/target/debug -lsmtx_parser

#include <./bindings.h>
*/
import "C"

func TestBindings() {
	C.get_buffer()
	// buffer := unsafe.Slice((*byte)(bufResult.ptr), bufResult.len)
	// // bad idea for large buffer performance
	// // bufferCopy := C.GoBytes(unsafe.Pointer(fbr.ptr), C.int(fbr.len))

	// // fmt.Printf("Flexbuffer data: %v\n", flexBuf)
}
