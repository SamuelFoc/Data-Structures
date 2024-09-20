package main

import (
	"errors"
	"fmt"
)

func show_array(arr []int, arr_size int, max_idx int) error {
	if (max_idx > arr_size || max_idx <= 0){
		return errors.New("max_idx has to be within the bounds of the array size!")
	}
	if (arr == nil){
		fmt.Println("Array is empty!")
		return nil
	} else {
		fmt.Print("[")
		for idx:=0; idx < max_idx; idx++ {
			fmt.Print(arr[idx])
			if idx < max_idx - 1 {
				fmt.Print(", ")
			}
		}
	}

	if max_idx < arr_size {
		fmt.Print(", ..., ", arr[arr_size - 1])
	}
	fmt.Print("]")

	return nil
}

func main(){
	x := 10
	var ptr *int = &x
	fmt.Println("Dereferenced pointer: ", *ptr)
	fmt.Println("Address to the value: ", ptr)

	fmt.Println(" ")

	var arr = [14]int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14}
	err := show_array(arr[:], 14, 5) // Pass a slice of the array
	if err != nil {
		fmt.Println("Error:", err)
	}
}