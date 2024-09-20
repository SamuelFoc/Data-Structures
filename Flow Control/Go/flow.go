package main

import "fmt"

func main(){
	var x int = 10
	var arr [5]int = [5]int{1,2,3,4,5}

	if x > 0 {
		fmt.Println("X > 0")
	} else {
		fmt.Println("X <= 0")
	}

	fmt.Println("For loop:")
	for i:=0; i < 5; i++ {
		fmt.Print(arr[i])
	}
	fmt.Println(" ")

	fmt.Println("While loop:")
	iterator := 0
	for iterator < 5 {
		fmt.Print(iterator)
		iterator++
	}
	fmt.Println(" ")

	switch x {
	case 0:
		fmt.Println("X = 0")
	case 10:
		fmt.Println("X = 10")
	default:
		fmt.Println("X is not equal to neither 0 or 10")
	}
}