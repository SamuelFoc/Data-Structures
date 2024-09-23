package main

import "fmt"

func sayHello() {
	fmt.Println("Hello, World!")
}

func add(a int, b int) int {
	return a + b
}

func main() {
	subtract := func(a int, b int) int {
		return a - b
	}

	var sum int = add(5, 2)
	var diff int = subtract(5, 2)
	
	sayHello()
	fmt.Println("5 + 2 = ", sum)
	fmt.Println("5 - 2 = ", diff)
}