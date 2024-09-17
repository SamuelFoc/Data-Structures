#include <iostream>
#include <vector>

int main() {
    // Defining a vector
    std::vector<int> vec = {1, 2, 3, 4};
    std::cout << "Vector: ";
    for (int item : vec) {
        std::cout << item << " ";
    }
    std::cout << std::endl;  // Output: Vector: 1 2 3 4

    // Accessing a vector item
    std::cout << "Item at index 0: " << vec[0] << std::endl;  // Output: Item at index 0: 1

    // Modifying a vector item
    vec[0] = 2;
    std::cout << "Modified item at index 0: ";
    for (int item : vec) {
        std::cout << item << " ";
    }
    std::cout << std::endl;  // Output: Modified item at index 0: 2 2 3 4

    // Adding an element to the end of the vector
    vec.push_back(5);
    std::cout << "Vector after appending 5: ";
    for (int item : vec) {
        std::cout << item << " ";
    }
    std::cout << std::endl;  // Output: Vector after appending 5: 2 2 3 4 5

    // Inserting an element at a specific index
    vec.insert(vec.begin() + 2, 10);  // Inserts 10 at index 2
    std::cout << "Vector after inserting 10 at index 2: ";
    for (int item : vec) {
        std::cout << item << " ";
    }
    std::cout << std::endl;  // Output: 2 2 10 3 4 5

    // Removing an element by index
    vec.erase(vec.begin() + 1);  // Removes the element at index 1
    std::cout << "Vector after removing item at index 1: ";
    for (int item : vec) {
        std::cout << item << " ";
    }
    std::cout << std::endl;  // Output: 2 10 3 4 5

    // Checking the length of the vector
    std::cout << "Length of vector: " << vec.size() << std::endl;  // Output: Length of vector: 5

    return 0;
}
