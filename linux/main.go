package main

import "fmt"

// #cgo LDFLAGS: ./staticlib/libsfoo.a ./dylib/libfoo.so
// #include "lib.h"
import "C"

func main() {
	C.foo()
	fmt.Println("vim-go")
}
