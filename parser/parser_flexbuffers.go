package parser

/*
#cgo CFLAGS: -I${SRCDIR}/target/debug
#cgo LDFLAGS: -L${SRCDIR}/target/debug -lsmtx_parser

#include <./bindings.h>
*/
import "C"
import (
	"fmt"
	"unsafe"

	flexbuffers "github.com/ashish-sjc/flexbuffers"
)

func TestBindings() {
	flexBufResult := C.get_flexbuffer()
	flexBuf := unsafe.Slice((*byte)(flexBufResult.ptr), flexBufResult.len)
	// bad idea for large buffer performance
	// bufferCopy := C.GoBytes(unsafe.Pointer(fbr.ptr), C.int(fbr.len))

	// fmt.Printf("Flexbuffer data: %v\n", flexBuf)

	// Create a flexbuffer reader
	fb := flexbuffers.NewBuilder()
	fb.WriteBytes(flexBuf)
	fb.Finish()

	// Check the type of the data
	root := fb.Buffer().RootOrNull()
	// data, _ := base64.StdEncoding.DecodeString(root.String())
	rootMap := root.AsMap()
	println(rootMap.SizeOrZero())
	fmt.Printf("%s\n", root.String())
	// rootObj := root.AsMap()
	// hp, _ := rootObj.Get("mana")
	// fmt.Printf("Flexbuffer data: %v\n", hp)

	// Now you can access the data based on your expected type
	// For example, if it's a vector:
	// vector := reader.AsVector()
	// For a map:
	// mapData := reader.AsMap()
	// For a string:
	// str := reader.AsString()

	// Example reading a map:
	// if reader.IsMap() {
	// 	mapData := reader.AsMap()
	// 	// Access map values using keys
	// 	// value := mapData.Get("key")
	// }
}
