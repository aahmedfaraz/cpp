
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main() {
    // ==========================================
    // 1. STATIC TYPING IN C++
    // ==========================================

    cout << "=== 1. Static Typing in C++ ===\n\n";

    // We explicitly declare the variable's type.
    int age = 26;
    cout << "Age: " << age << endl; 

    // We can change the value, but the type remains int.
    age = 27;
    cout << "Updated age: " << age << endl;

    // Uncomment the following line to see a compile-time error:
    // age = "Ahmed";

    cout << "The variable 'age' is an int.\n";
    cout << "Its value can change, but its type cannot.\n\n";


    // ==========================================
    // 2. TYPE INFERENCE WITH AUTO
    // ==========================================

    cout << "=== 2. Type Inference with auto ===\n\n";

    // The compiler infers the type from the initial value.
    auto number = 100;

    cout << "Number: " << number << endl;
    cout << "Type: " << typeid(number).name() << endl; // Output: i (for int). Other names are d (for double), c (for char), etc.

    number = 200;  // Valid: still an int

    // Uncomment to see a compile-time error:
    // number = "Hello";

    cout << "Updated number: " << number << endl;
    cout << "The type inferred by auto remains fixed.\n\n";


    // ==========================================
    // 3. IMPLICIT TYPE CONVERSION
    // ==========================================

    cout << "=== 3. Implicit Type Conversion ===\n\n";

    int wholeNumber = 10;
    double decimalNumber = 3.14;

    wholeNumber = decimalNumber;

    cout << "Double value: " << decimalNumber << endl; // Output: 3.14
    cout << "Converted int: " << wholeNumber << endl; // Output: 3

    cout << "The fractional part is discarded.\n";
    cout << "The variable remains an int.\n\n";


    // ==========================================
    // 4. DYNAMIC TYPING: PYTHON COMPARISON
    // ==========================================

    cout << "=== 4. Dynamic Typing: Python Comparison ===\n\n";

    // In Python, the same variable name can refer
    // to values of different types.

    // Python equivalent:
    // value = 10
    // value = "Hello"
    // value = True

    cout << "In Python:\n";
    cout << "value = 10       // int\n";
    cout << "value = \"Hello\"  // str\n";
    cout << "value = True     // bool\n\n";

    cout << "These assignments are valid in Python.\n";

    // C++ equivalent:
    int value = 10;

    // Uncommenting this assignment causes an error:
    // value = "Hello";

    cout << "\nIn C++:\n";
    cout << "value starts as an int: " << value << endl;
    cout << "Assigning a string directly is invalid.\n\n";


    // ==========================================
    // 5. IMPORTANT: BOOL TO INT CONVERSION
    // ==========================================

    cout << "=== 5. A Type Conversion Example ===\n\n";

    int result = true;

    cout << "int result = true;\n";
    cout << "Result: " << result << endl; // Output: 1

    cout << "true converts to 1 in this assignment.\n";
    cout << "This does not make C++ dynamically typed.\n\n";


    // ==========================================
    // FINAL SUMMARY
    // ==========================================

    cout << "=== Summary ===\n\n";

    cout << "Static typing:\n";
    cout << "- A variable has a declared or inferred type.\n";
    cout << "- Its type is checked primarily at compile time.\n";
    cout << "- Its value can change without changing its type.\n\n";

    cout << "Dynamic typing (Python example):\n";
    cout << "- A variable name can refer to different types.\n";
    cout << "- Types are checked primarily at runtime.\n\n";

    cout << "Remember: auto is type inference, not dynamic typing.\n";

    return 0;
}
