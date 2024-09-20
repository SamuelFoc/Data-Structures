#include <iostream>
#include <sstream>

int main(){
    // Declaring an integer variable
    int x = 10;
    // Save the address of x to the integer pointer
    int* ptr = &x;

    // Convert HEX to DEC
    unsigned long long dec_x_address;
    std::stringstream ss;
    ss << std::hex << ptr;
    ss >> dec_x_address;

    // Hexadecimal address of pointer
    std::cout << "The HEX memmory address: " << ptr << std::endl;
    // Decimal address of pointer
    std::cout << "The DEC memory address: " << dec_x_address << std::endl;
    // Dereferencing the pointer
    std::cout << "The value stored at the address: " << *ptr << std::endl;
    return 0;
}