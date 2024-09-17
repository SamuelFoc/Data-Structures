package main

import "fmt"

func main() {
    // Defining a slice
    arr := []int{1, 2, 3, 4}
    fmt.Println(arr)  // Output: [1 2 3 4]

    // Accessing a slice item
    fmt.Printf("Item at index 0: %d\n", arr[0])  // Output: Item at index 0: 1

    // Modifying a slice item
    arr[0] = 2
    fmt.Printf("Modified item at index 0: %v\n", arr)  // Output: Modified item at index 0: [2 2 3 4]

    // Adding an element to the end of the slice
    arr = append(arr, 5)
    fmt.Printf("Slice after appending 5: %v\n", arr)  // Output: Slice after appending 5: [2 2 3 4 5]

    // Inserting an element at a specific index
    index := 2
    value := 10
    arr = append(arr[:index], append([]int{value}, arr[index:]...)...)  // Inserts 10 at index 2
    fmt.Printf("Slice after inserting 10 at index 2: %v\n", arr)  // Output: [2 2 10 3 4 5]

    // Removing an element by index
    indexToRemove := 1
    arr = append(arr[:indexToRemove], arr[indexToRemove+1:]...)  // Removes the element at index 1
    fmt.Printf("Slice after removing item at index 1: %v\n", arr)  // Output: [2 10 3 4 5]

    // Checking the length of the slice
    fmt.Printf("Length of slice: %d\n", len(arr))  // Output: Length of slice: 5

    // Slicing a slice (getting a sub-slice)
    slicedArr := arr[1:3]
    fmt.Printf("Sliced array (index 1 to 3): %v\n", slicedArr)  // Output: [10 3]

    // Iterating through a slice
    for index, value := range arr {
        fmt.Printf("Item at index %d: %d\n", index, value)
    }
    // Output:
    // Item at index 0: 2
    // Item at index 1: 10
    // Item at index 2: 3
    // Item at index 3: 4
    // Item at index 4: 5
}
