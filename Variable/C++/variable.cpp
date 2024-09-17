#include <iostream> // Include the iostream library for input and output
#include <string>   // Include the string library for using std::string

int main() {
    // Basic data types
    int var = 10;         // Integer type
    float pi = 3.14f;     // Floating-point type with single precision
    double e = 2.718;     // Floating-point type with double precision
    char letter = 'A';    // Character type
    bool is_valid = true; // Boolean type

    // Output basic types
    std::cout << "Integer var: " << var << std::endl;
    std::cout << "Float pi: " << pi << std::endl;
    std::cout << "Double e: " << e << std::endl;
    std::cout << "Char letter: " << letter << std::endl;
    std::cout << "Boolean is_valid: " << std::boolalpha << is_valid << std::endl;

    // Derived types
    int numbers[5] = {1, 2, 3, 4, 5}; // Array of integers
    int* ptr = &numbers[0];           // Pointer to the first element of the array
    int& ref = numbers[0];            // Reference to the first element of the array

    // Output derived types
    std::cout << "Array numbers: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Pointer ptr pointing to numbers[0]: " << *ptr << std::endl;
    std::cout << "Reference ref to numbers[0]: " << ref << std::endl;

    // User-Defined data types
    struct Person {
        std::string name; // Member of type string
        int age;          // Member of type integer
    };
    Person john = {"John Doe", 30}; // Initialize a struct

    enum Color { RED, GREEN, BLUE }; // Enumeration type
    Color pre_set_color = GREEN;     // Set a variable of type Color to GREEN

    // File permissions using enum with bitwise operations
    enum FilePermissions {
        READ = 1 << 0,   // 1 (0001 in binary)
        WRITE = 1 << 1,  // 2 (0010 in binary)
        EXECUTE = 1 << 2 // 4 (0100 in binary)
    };

    // Set file permissions
    int permissions = READ | WRITE; // Combine READ and WRITE permissions

    // Output the initial file permissions
    std::cout << "Initial Permissions: " << permissions << " (READ | WRITE)" << std::endl;

    // Check individual permissions
    if (permissions & READ) {
        std::cout << "READ permission is set." << std::endl;
    }

    if (permissions & WRITE) {
        std::cout << "WRITE permission is set." << std::endl;
    }

    if (permissions & EXECUTE) {
        std::cout << "EXECUTE permission is set." << std::endl;
    } else {
        std::cout << "EXECUTE permission is not set." << std::endl;
    }

    // Add EXECUTE permission
    permissions |= EXECUTE;
    std::cout << "After adding EXECUTE, Permissions: " << permissions << std::endl;

    // Remove WRITE permission
    permissions &= ~WRITE;
    std::cout << "After removing WRITE, Permissions: " << permissions << std::endl;

    // Toggle READ permission
    permissions ^= READ;
    std::cout << "After toggling READ, Permissions: " << permissions << std::endl;

    // Output user-defined types
    std::cout << "Person name: " << john.name << ", age: " << john.age << std::endl;
    std::cout << "Color pre_set_color: " << pre_set_color << " (0 = RED, 1 = GREEN, 2 = BLUE)" << std::endl;

    return 0; // Indicate that the program ended successfully
}
