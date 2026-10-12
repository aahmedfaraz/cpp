#include <iostream>
using namespace std;

int main() {
    int myNum = 10;
    float myFloat = 3.14f;
    double myDouble = 12e4;
    long double myLongDouble = 3.14159L;
    cout << "int: " << myNum << '\n';
    cout << "float: " << myFloat << '\n';
    cout << "double: " << myDouble << '\n';
    cout << "long double: " << myLongDouble << '\n';
    return 0;
}

// Output:

// int: 10
// float: 3.14
// double: 120000
// long double: 3.14159