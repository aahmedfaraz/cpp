#include <iostream>

// Function Overloading in C++ allows multiple functions to have the same name but different parameters. The compiler determines which function to call based on the arguments passed during the function call. This is a form of compile-time polymorphism.

void display(int x) {
    std::cout << "Integer: " << x << std::endl;
}
void display(double x) {
    std::cout << "Double: " << x << std::endl;
}

int main() {
    display(5);      // Calls the function with int parameter
    display(3.14);   // Calls the function with double parameter
    return 0;
}

// Output:
// Integer: 5
// Double: 3.14