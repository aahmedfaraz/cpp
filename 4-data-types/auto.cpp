#include <iostream>
using namespace std;

int main() {
    // Using auto keyword
    auto x = 5; // x is automatically treated as int
    
    // Creating auto variables
    auto myNum = 5; // int
    auto myFloatNum = 5.99f; // float
    auto myDoubleNum = 9.98; // double
    auto myLetter = 'D'; // char
    auto myBoolean = true; // bool
    auto myString = string("Hello"); // std::string

    // Displaying the values of auto variables
    cout << "Integer: " << myNum << endl;
    cout << "Float: " << myFloatNum << endl;
    cout << "Double: " << myDoubleNum << endl;
    cout << "Character: " << myLetter << endl;
    cout << "Boolean: " << myBoolean << endl;
    cout << "String: " << myString << endl;

    return 0;
}

// Output:

// Integer: 5
// Float: 5.99
// Double: 9.98
// Character: D
// Boolean: 1
// String: Hello
