#include <iostream>

int main() {
    // int* ptr = nullptr;
    // *ptr = 10; // This will cause an access violation (dereferencing a null pointer)
    // // - int* ptr declares a pointer to an integer.
    // // - nullptr means the pointer doesn't point to a valid object.
    // // - *ptr = 10 attempts to write 10 to the memory location pointed to by ptr.

    // How to write
    int x = 10;
    int* ptr = nullptr; // ptr now points to the memory address of x
    ptr = &x; // Assign the address of x to ptr
    *ptr = 20; // This is valid, as ptr points to a valid memory

    std::cout << "Value of x: " << x << std::endl; // Output: Value of x: 20

    return 0;
}