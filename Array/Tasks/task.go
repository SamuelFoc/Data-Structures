package main

import "fmt"

// Create a Go program that defines a slice of integers, then creates a function that takes a pointer to the slice and modifies it to include only the odd numbers

func evenize(slice *[]int) []int {
	var filtered_slice []int = []int {}

	for _,item := range *slice {
		if item % 2 == 0 {
			filtered_slice = append(filtered_slice, item) 
		}
	}
	return filtered_slice
}

func main() {
	var numbers []int = []int{1, 2, 3, 4, 5, 6}

	var even_numbers []int = evenize(&numbers)

	fmt.Print("Slice containing only even numbers:", even_numbers)
}