#include <iostream>

// Void Function
void say_hello() {
    std::cout << "Hello, World!" << std::endl;
}

// Return type function
int add(int a, int b) {
    return a + b;
}

// Lambda Function
auto subtract = [](int a, int b) -> int {
    return a - b;
};

int main(){
    say_hello();
    
    int sum = add(5, 2);
    int difference = subtract(5, 2);

    std::cout << "The sum of 5 and 2 is: " << sum << std::endl;
    std::cout << "The difference of 5 and 2 is: " << difference << std::endl; 

    return 0;
}