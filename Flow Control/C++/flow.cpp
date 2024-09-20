#include <iostream>

int main() {
    int x = 10;
    int arr[5] = {1,2,3,4,5};

    // If statement
    if (x > 0){
        std::cout << "Condition met.." << std::endl;
    } else {
        std::cout << "Condition not met.." << std::endl;
    }

    // For loop
    std::cout << "For loop:" << std::endl;
    for (int i=0; i < 5; i++){
        std::cout << arr[i];
    }
    std::cout << std::endl;

    // While loop
    std::cout << "While loop:" << std::endl;
    int iterator = 0;
    while (iterator < 5) {
        std::cout << iterator << " ";
        iterator++;
    }
    std::cout << std::endl;

    // Switch case
    switch (x) {
        case 0:
            std::cout << "X = 0";
            break;
        case 10:
            std::cout << "X = 10";
            break;
        default:
            std::cout << "X is not equal to neither 0 or 10";
    }

    return 0;
}