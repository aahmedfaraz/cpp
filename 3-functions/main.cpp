#include <iostream>

// FUNCTION DECLARATION: Functions can be declared before they are defined. Also called function prototype.

void myFunction();

// RETURN TYPES & PARAMETERS

void myFunction2() {
    std::cout << "This is a void function, which does not return any value." << std::endl;
}

int add(int a, int b) {
    std::cout << "This function has return type integer." << std::endl;
    return a + b;
}

void printNTimes(int n, std::string text) {
    for (int i = 0; i < n; i++) {
        std::cout << text << std::endl;
    }
}

std::pair<int, int> makePair(int x, int y) {
    if (x > y) {
        return std::pair<int, int>(x, y);
    } else {
        return std::pair<int, int>(y, x);
    }
}

// DEFAULT PARAMETERS

int doMath(int a, int b, int c = 2) {
    return (a + b) * c;
}

// PASS BY REFERENCE

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

// PASS BY POINTER

void swap2(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    // Function Call
    myFunction();

    // Function Call with return type
    int sum = add(5, 10);
    std::cout << "The sum is: " << sum << std::endl;

    // Function Call with parameters
    printNTimes(3, "Hello, World!");

    // Function Call with return type and parameters
    std::pair<int, int> result = makePair(10, 5);
    std::cout << "The pair is: (" << result.first << ", " << result.second << ")" << std::endl;

    // Function Call with default parameter
    int mathResult = doMath(3, 4);
    std::cout << "The result of doMath is: " << mathResult << std::endl;

    // Function Call with pass by reference
    int a = 5;
    int b = 10;
    swap(a, b);
    std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;

    // Function Call with pass by pointer
    int c = 15;
    int d = 20;
    swap2(&c, &d);
    std::cout << "After swapping2: c = " << c << ", d = " << d << std::endl;

    return 0;
}

// Function Definition
void myFunction() {
    std::cout << "This is a function definition." << std::endl;
}

// OUTPUT

// This is a function definition.
// This function has return type integer.
// The sum is: 15
// Hello, World!
// Hello, World!
// Hello, World!
// The pair is: (10, 5)
// The result of doMath is: 14
// After swapping: a = 10, b = 5
// After swapping2: c = 20, d = 15