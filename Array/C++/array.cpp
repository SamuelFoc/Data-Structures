#include <iostream>

int main() {
    // Defining an array
    int arr[4] = {1, 2, 3, 4};
    std::cout << "Array: ";
    for (int i = 0; i < 4; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;  // Output: Array: 1 2 3 4 

    // Accessing an array item
    std::cout << "Item at index 0: " << arr[0] << std::endl;  // Output: Item at index 0: 1

    // Modifying an array item
    arr[0] = 2;
    std::cout << "Modified item at index 0: ";
    for (int i = 0; i < 4; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;  // Output: Modified item at index 0: 2 2 3 4

    // Note: Arrays in C++ have fixed size and cannot be resized dynamically.
    return 0;
}
