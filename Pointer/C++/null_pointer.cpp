#include <iostream>
#include <stdexcept>

void show_array(int* arr, int arr_size, int max_idx = 1){
    if (max_idx > arr_size || max_idx <= 0){
        throw std::runtime_error("max_idx has to be within the bounds of the array size!");
    }
    if (arr == nullptr){
        std::cout << "Array is empty!";
    } else {
        std::cout << "[";
        // Print first 10 elements
        for (int i = 0; i < max_idx; i++){
            std::cout << arr[i];
            if (i < max_idx - 1) {
                std::cout << ", ";
            } 
        }

        if(max_idx < arr_size){
            std::cout << ", ..., " << arr[arr_size - 1];
        }
        std::cout << "]";
    }
}

int main(){
    int arr[14] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    std::cout << arr_size << std::endl;
    show_array(arr, arr_size, 5); 
    return 0;
}