#include <iostream>

int main() {
    // C-style type casting (not recommended, but still valid in C++)
    // also known as cast-notation.
    double d = 3.14;
    int i = (int)d; // C-style cast from double to int
    std::cout << "Double: " << d << ", Int: " << i << std::endl; // Output: Double: 3.14, Int: 3

    int j = 10;
    double k = (double)j; // C-style cast from int to double
    std::cout << "Int: " << j << ", Double: " << k << std::endl; // Output: Int: 10, Double: 10

    return 0;
}