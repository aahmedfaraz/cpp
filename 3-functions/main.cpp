#include <iostream>

// Function Declaration
void myFunction2();

void myFunction() {
    std::cout << "This function has not return type." << std::endl;
}

int sum(int a, int b) {
    std::cout << "This function has return type integer." << std::endl;
    return a + b;
}

int main() {
    myFunction();
    int result = sum(5, 10);
    std::cout << "The sum is:" << result << std::endl;
    myFunction2();
    return 0;
    // output:
    // This function has not return type.
    // This function has return type integer.
    // The sum is:15
    // This is a function definition.
}

// Function Definition
void myFunction2() {
    std::cout << "This is a function definition." << std::endl;
}