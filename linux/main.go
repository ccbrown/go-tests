package main

import "fmt"

// #cgo LDFLAGS: ${SRCDIR}/staticlib/libsfoo.a ${SRCDIR}/dylib/libfoo.so
// #include "lib.h"
import "C"

func main() {
	C.foo()
	fmt.Println("vim-go")
}
