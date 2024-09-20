package main

import (
	"fmt"
)

// Create a struct for a Rectangle that contains width and height.
// Implement a function that takes a pointer to a Rectangle,
// calculates its area, and modifies its dimensions.

type Rectangle struct {
	Height int
	Width int
}

func modify_and_calculate_area(rectangle *Rectangle) int {
	// Modify the dimensions
	rectangle.Height += 1
	rectangle.Width += 1
	
	// Calculate the area
	area := rectangle.Height * rectangle.Width

	fmt.Printf("The area of the rectangle [%d, %d] is %d", rectangle.Height, rectangle.Width, area)

	return area  
}

func main(){
	rect := Rectangle{Height: 5, Width: 10}
	area := modify_and_calculate_area(&rect)

	fmt.Printf("Returned area: %d", area)
}