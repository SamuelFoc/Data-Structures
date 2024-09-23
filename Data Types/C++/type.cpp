#include <iostream>
#include <climits>      // For INT_MAX and other limit macros
#include <cfloat>       // For floating-point limits
using namespace std;

int main() {
    int integer = INT_MAX;               // Maximum 4-byte integer: 2147483647
    long long_integer = LONG_MAX;        // Maximum 8-byte long: 9223372036854775807
    float float_number = FLT_MAX;        // Maximum 4-byte float: ~3.40282e+38
    double float_double = DBL_MAX;       // Maximum 8-byte double: ~1.79769e+308
    long double longest_float = LDBL_MAX; // Maximum long double: ~1.18973e+4932

    char character = CHAR_MAX;           // Maximum value of char: 127 (signed)
    bool boolean = true;                 // Boolean only has two states, max is true
    int arr[5] = {INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX};  // Max values for an integer array

    wchar_t wideChar = WCHAR_MAX;        // Maximum value for wide character (platform-dependent)
    wchar_t wideStr[] = L"UNICODE STRING \uFFFF";   // Wide string with max wide character '\uFFFF'

    enum Color {RED, GREEN, BLUE, MAX_COLOR = 100}; // Max value for enum: 100
    Color color = MAX_COLOR;

    struct Person {
        char name[20];
        int age;
        float height;
    };
    Person person1 = {"MaxName", INT_MAX, FLT_MAX};  // Max values for Person struct

    void* pointer = nullptr;             // Void pointer remains nullptr
    
    // Output the variables for validation
    cout << "Integer: " << integer << endl;
    cout << "Long integer: " << long_integer << endl;
    cout << "Float number: " << float_number << endl;
    cout << "Double number: " << float_double << endl;
    cout << "Long double number: " << longest_float << endl;
    cout << "Character: " << int(character) << endl; // Casting char to int to display it properly
    cout << "Boolean: " << boolean << endl;
    cout << "Array of max integers: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    wcout << L"Wide character: " << wideChar << endl;
    wcout << L"Wide string: " << wideStr << endl;
    cout << "Enum Color max value: " << color << endl;
    cout << "Person name: " << person1.name << ", age: " << person1.age << ", height: " << person1.height << endl;

    return 0;
}
