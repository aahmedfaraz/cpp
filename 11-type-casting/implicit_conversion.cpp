#include <iostream>
using namespace std;

// There are two types of type conversion in C++:
// 1. Implicit type conversion (also known as type coercion)
// 2. Explicit type conversion (also known as type casting)

int main() {
    // Implicit type conversion
    // The type conversion that is automatically performed by the compiler is called implicit type conversion.

    int a = 5;
    double b = a; // Implicit conversion from int to double
    cout << "Value of a: " << a << endl; // Output: Value of a: 5
    cout << "Value of b: " << b << endl; // Output: Value of b: 5

    double c = 3.14;
    int d = c; // Implicit conversion from double to int (fractional part is truncated)
    cout << "Value of c: " << c << endl; // Output: Value of c: 3.14
    cout << "Value of d: " << d << endl; // Output: Value of d: 3    

    return 0;
}