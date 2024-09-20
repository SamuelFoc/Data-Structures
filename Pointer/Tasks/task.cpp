#include <iostream>

void fill_array(int* arr, int size){
    for (int i=0; i < size; i++){
        arr[i] = i;
    }
}

void print_array(int* arr, int size){
    std::cout << "[";
    for (int i=0; i < size; i++){
        std::cout << arr[i];
        if (i < size - 1){
            std::cout << ", ";
        }
    }
    std::cout << "]";
}

int main(){
    int size;
    std::cout << "Enter the size of the array: " << std::endl;
    std::cin >> size;

    int* arr = new int[size];
    
    fill_array(arr, size);
    print_array(arr, size);

    return 0;
}