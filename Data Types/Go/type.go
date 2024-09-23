package main

import (
	"fmt"
	"math"
)

func main() {
	// Maximum values for basic types
	var integer int = math.MaxInt64           // Max value for 64-bit int: 9223372036854775807
	var unsignedInteger uint = math.MaxUint64 // Max value for uint: 18446744073709551615
	var floatNumber float32 = math.MaxFloat32 // Max value for float32: ~3.4028235e+38
	var floatDouble float64 = math.MaxFloat64 // Max value for float64: ~1.7976931348623157e+308
	var character rune = math.MaxInt32        // Max value for a rune (int32, Unicode code point): 2147483647
	var boolean bool = true                   // Boolean can only be true or false
	var wideChar rune = '\U0010FFFF'          // The largest valid Unicode code point: U+10FFFF

	// Maximum value in an array
	var arr = [5]int{math.MaxInt64, math.MaxInt64, math.MaxInt64, math.MaxInt64, math.MaxInt64}

	// Enumeration equivalent in Go: Constants
	const (
		RED   = iota
		GREEN
		BLUE
		MAX_COLOR = 100
	)

	// Struct definition and initialization with maximum values
	type Person struct {
		Name   string
		Age    int
		Height float32
	}

	person1 := Person{
		Name:   "MaxName",
		Age:    math.MaxInt64,
		Height: math.MaxFloat32,
	}

	// Output the maximum values
	fmt.Println("Max int:", integer)
	fmt.Println("Max uint:", unsignedInteger)
	fmt.Println("Max float32:", floatNumber)
	fmt.Println("Max float64:", floatDouble)
	fmt.Println("Max rune (Unicode):", character)
	fmt.Println("Boolean:", boolean)
	fmt.Println("Array of max integers:", arr)
	fmt.Printf("Max wideChar: %U\n", wideChar)
	fmt.Println("Max enum-like constant (MAX_COLOR):", MAX_COLOR)
	fmt.Printf("Person: Name=%s, Age=%d, Height=%f\n", person1.Name, person1.Age, person1.Height)
}
  
