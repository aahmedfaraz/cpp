#include <iostream>
using namespace std;

// In C++, variables are only accessible inside the region they are created. This is called scope.

// A variable created inside a function belongs to the local scope of that function, and can only be used inside that function.

// A variable created outside of a function, is called a global variable and belongs to the global scope.

// If you operate with the same variable name inside and outside of a function, C++ will treat them as two separate variables; 
// One available in the global scope (outside the function) and one available in the local scope (inside the function)

// However, you should avoid using the same variable name for both globally and locally variables as it can lead to errors and confusion.

// In general, you should be careful with global variables, since they can be accessed and modified from any function

// Global variable x
int x = 5;

void myFunction() {
  // Local variable with the same name as the global variable (x)
  int x = 22;
  cout << x << "\n"; // Refers to the local variable x
}

int main() {
  myFunction();

  cout << x; // Refers to the global variable x
  return 0;
}

// Output:

// 22
// 5