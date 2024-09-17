#include <iostream>

void filterEvenNumbers(int* arr, int size, int*& evenArr, int& evenCount) {
    evenCount = 0; // Initialize count
    evenArr = new int[size]; // Dynamically allocate memory for the worst case

    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            evenArr[evenCount++] = arr[i]; // Store even number and increment count
        }
    }

    // Resize the array to the actual number of even elements
    int* temp = new int[evenCount];
    for (int i = 0; i < evenCount; ++i) {
        temp[i] = evenArr[i];
    }
    delete[] evenArr; // Free original memory
    evenArr = temp;   // Point to the new resized array
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* evenArr = nullptr; // Pointer for even numbers
    int evenCount = 0;      // To hold the count of even numbers

    filterEvenNumbers(arr, 10, evenArr, evenCount);

    std::cout << "Even numbers: ";
    for (int i = 0; i < evenCount; ++i) {
        std::cout << evenArr[i] << " ";
    }
    std::cout << std::endl;

    delete[] evenArr; // Free allocated memory
    return 0;
}
