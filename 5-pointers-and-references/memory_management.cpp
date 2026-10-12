#include <iostream>

int main() {
    // Memory Management
    // The process of controlling how much memory our program uses

    // How much memory variables uses, we can check using sizeof operator
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl; // Output: 4 bytes
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl; // Output: 8 bytes
    std::cout << "Size of char: " << sizeof(char) << " bytes" << std::endl; // Output: 1 byte
    std::cout << "Size of bool: " << sizeof(bool) << " bytes" << std::endl; // Output: 1 byte
    std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl; // Output: 4 bytes

    // new keyword: lets you allocate memory on the heap
    int* ptr = new int; // Allocating memory for an integer on the heap
    *ptr = 42; // Assigning value to the allocated memory
    std::cout << "Value at ptr: " << *ptr << std::endl; // Output: Value at ptr: 42

    // delete keyword: lets you deallocate memory on the heap
    delete ptr; // Deallocating memory to prevent memory leaks

    // What Happens If You Forget delete?
    // If you forget to delete memory, your program will still run, but it may use more and more memory over time.
    // This is called a memory leak, and it can slow down or crash your program over time.

    // Note: After deleting, the pointer still holds the address of the deallocated memory, 
    // which can lead to undefined behavior if dereferenced. 
    // It's a good practice to set it to nullptr after deletion.
    ptr = nullptr; // Setting pointer to nullptr after deletion

    // Using new and delete with Arrays
    int size;
    std::cin >> size; // Taking input for the size of the array
    int* arr = new int[size]; // Allocating memory for an array of 5 integers on the heap
    for (int i = 0; i < size; ++i) {
        arr[i] = i * 10; // Assigning values to the array
    }

    std::cout << "Array values: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " "; // Output: 0 10 20 30 40
    }

    std::cout << std::endl;

    delete[] arr; // Deallocating memory for the array to prevent memory leaks
    arr = nullptr; // Setting pointer to nullptr after deletion

    return 0;
}