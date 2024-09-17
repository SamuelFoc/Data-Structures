#include <iostream>

// Task: Write a program that defines a structure for a Point with x and y coordinates. 
// Implement a function that takes a pointer to a Point, modifies its coordinates, 
// and prints the updated values.

struct Point {
    int x;
    int y;
};

void modify_point(Point* p, int x, int y) {
    p->x = x; // Access the structure via pointer and assign a new value
    p->y = y; // Access the structure via pointer and assign a new value
    std::cout << "Point(" << p->x << ", " << p->y << ")" << std::endl;
}

int main() {
    Point position = {0, 0};

    modify_point(&position, 1, 1);

    return 0;
}