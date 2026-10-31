#include <iostream>
using namespace std;

int main() {
    int x = 10;

    int* ptr = &x;

    cout << x << '\n';    // 10
    cout << &x << '\n';   // Address of x
    cout << ptr << '\n';  // Same address
    cout << *ptr << '\n'; // 10

    *ptr = 20; // Change the value of x through the pointer
    cout << x << '\n';    // 20

    // 10
    // 0x17b9ffccc
    // 0x17b9ffccc
    // 10
    // 20

    // new and delete
    int* p = new int(30); // Dynamically allocate an integer and initialize it to 30
    cout << *p << '\n';   // 30
    cout << p << '\n';    // Address of the dynamically allocated memory
    // 30
    // 0x14681574cc0
    
    delete p;             // Deallocate the memory
    cout << *p << '\n';   // Undefined behavior (dangling pointer)
    cout << p << '\n';    // Address of the deallocated memory (dangling pointer)
    // -2124979312
    // 0x14681574cc0
    
    p = nullptr;          // Set the pointer to nullptr to avoid dangling pointer
    cout << p << '\n';    // (null pointer)
    cout << *p << '\n';   // Segmentation fault (or similar)
    // 0 (null pointer)
    // Segmentation fault (or similar)

    return 0;
}