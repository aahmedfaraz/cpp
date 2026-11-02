#include <iostream>
using namespace std;

int main() {
    // C++ named casts (most safest and recommended way of type conversion)
    // There are four named type-casting expressions in C++:
    // 1. static_cast
    // 2. dynamic_cast
    // 3. const_cast
    // 4. reinterpret_cast
    
    // 1. static_cast
    // We use static_cast for standard type conversions, such as converting from float to int
    float f = 3.14;
    int i = static_cast<int>(f); // Convert float to int
    cout << "Float: " << f << ", Int: " << i << endl; // Output: Float: 3.14, Int: 3

    // 2. dynamic_cast
    // We use dynamic_cast for safe downcasting in class hierarchies
    class Base {
    public:
        virtual void show() { cout << "Base class" << endl; }
    };
    class Derived : public Base {
    public:
        void show() { cout << "Derived class" << endl; }
    };
    Base* basePtr = new Derived();
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr); // Safe downcasting
    if (derivedPtr) {
        derivedPtr->show(); // Calls Derived class show()
    } else {
        cout << "Downcasting failed" << endl;
    }
    // Output: Derived class

    // 3. const_cast
    // We use const_cast to add or remove the const qualifier from a variable
    const int x = 10;
    int* ptr = const_cast<int*>(&x); // Remove const qualifier
    *ptr = 20; // Modify the value (undefined behavior if x is actually const)
    cout << "Modified value: " << *ptr << endl; // Output: Modified value: 20

    // 4. reinterpret_cast
    // reinterpret_cast is used to convert one pointer type to another pointer type 
    // or one reference type to another reference type
    int num = 65;
    char* charPtr = reinterpret_cast<char*>(&num); // Convert int pointer to char pointer
    cout << "Reinterpreted value: " << *charPtr << endl; // Output: Reinterpreted value: A (ASCII value of 65)

    return 0;
}