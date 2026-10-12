#include <iostream>

int main() {
    // Function-style casting
    // We can use function-style casting to convert a value from one type to another.
    double pi = 3.14159;
    int i = int(pi); // Function-style cast from double to int
    std::cout << "Double: " << pi << ", Int: " << i << std::endl; // Output: Double: 3.14159, Int: 3
    
    return 0;
}