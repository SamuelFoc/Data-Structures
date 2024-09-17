package main

import (
	"fmt"
)

// Global variable
var globalVar = "I am a global variable"

// Defining a custom struct type
type Person struct {
	Name string
	Age  int
}

func main() {
	// Integer variables
	var age int = 30
	number := 10     // Implicitly declared as int
	// var smallNumber int8 = 5 // 8-bit integer

	// Floating-point variables
	var pi float32 = 3.14
	var e float64 = 2.718
	gravity := 9.81 // Implicitly declared as float64

	// String variable
	var name string = "John Doe"
	greeting := "Hello, World!"

	// Boolean variables
	var isValid bool = true
	isActive := false // Implicitly declared as bool

	// Rune (character) variable
	var letter rune = 'A' // A single character, stored as an int32

	// Array (fixed-size)
	var numbers [3]int = [3]int{1, 2, 3}

	// Slice (dynamic array)
	var dynamicNumbers []int = []int{1, 2, 3, 4}
	dynamicNumbers = append(dynamicNumbers, 5) // Adding an element to the slice

	// Map (key-value pairs)
	var myMap map[string]int = map[string]int{"one": 1, "two": 2}
	myMap["three"] = 3 // Adding a new key-value pair

	// Struct (custom type)
	john := Person{Name: "John Doe", Age: 30}
	jane := Person{"Jane Doe", 28} // Field names can be omitted if in order

	// Pointer variable
	ptr := &age // Pointer to the variable 'age'

	// Constants
	const Pi = 3.14159

	// Printing variables
	fmt.Println(globalVar)                   // Output: I am a global variable
	fmt.Printf("Age: %d, Number: %d\n", age, number) // Output: Age: 30, Number: 10
	fmt.Printf("Pi: %.2f, e: %.3f, Gravity: %.2f\n", pi, e, gravity) // Output: Pi: 3.14, e: 2.718, Gravity: 9.81
	fmt.Println("Name:", name)               // Output: Name: John Doe
	fmt.Println("Greeting:", greeting)       // Output: Hello, World!
	fmt.Println("Is Valid:", isValid)        // Output: Is Valid: true
	fmt.Println("Is Active:", isActive)      // Output: Is Active: false
	fmt.Printf("Letter: %c\n", letter)       // Output: Letter: A

	// Working with arrays
	fmt.Println("Array:", numbers)           // Output: Array: [1 2 3]

	// Working with slices
	fmt.Println("Slice:", dynamicNumbers)    // Output: Slice: [1 2 3 4 5]

	// Working with maps
	fmt.Println("Map:", myMap)               // Output: Map: map[one:1 two:2 three:3]

	// Working with structs
	fmt.Printf("Person 1: %s, Age: %d\n", john.Name, john.Age) // Output: Person 1: John Doe, Age: 30
	fmt.Printf("Person 2: %s, Age: %d\n", jane.Name, jane.Age) // Output: Person 2: Jane Doe, Age: 28

	// Working with pointers
	fmt.Printf("Pointer to age: %v, Value: %d\n", ptr, *ptr) // Output: Pointer to age: 0x..., Value: 30

	// Using constants
	fmt.Println("Constant Pi:", Pi)           // Output: Constant Pi: 3.14159
}
