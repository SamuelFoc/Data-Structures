package main

import "fmt"

func double_arr_values(arr []int) {
	var arr_size = len(arr)
	for idx:=0; idx < arr_size; idx++ {
		arr[idx] = arr[idx] * 2
	}
}

func print_arr(arr []int) {
	var arr_size = len(arr)
	fmt.Print("[")
	for idx:=0; idx < arr_size; idx++ {
		fmt.Print(arr[idx])
		if idx < arr_size - 1 {
			fmt.Print(", ")
		}
	}
	fmt.Print("]")
}

func main(){
	arr := []int{1,2,3,4,5,6,7,8,9,10}
	double_arr_values(arr)
	print_arr(arr)
}