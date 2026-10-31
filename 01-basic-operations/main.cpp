#include <iostream>

int main() {
    // Arithematic Operators
    int x = 10;
    int y = 3;
    std::cout << x + y << std::endl; // 13
    std::cout << x - y << std::endl; // 7
    std::cout << x * y << std::endl; // 30
    std::cout << x / y << std::endl; // 3
    std::cout << x % y << std::endl; // 1

    double a = 10;
    double b = 3;
    std::cout << a / b << std::endl; // 3.33333

    int z = 5;
    ++z; // Increment Operator
    std::cout << z << std::endl; // 6
    --z; // Decrement Operator
    std::cout << z << std::endl; // 5

    std::cout << ++z << std::endl; // 6 (because z is incremented before the value is printed)
    std::cout << z << std::endl; // 6
    std::cout << z++ << std::endl; // 6 (because z is incremented after the value is printed)
    std::cout << z << std::endl; // 7

    // Logical Operators
    std::cout << (true && false) << std::endl; // 0 (false)
    std::cout << (true && true) << std::endl; // 1 (true)
    std::cout << (true || false) << std::endl; // 1 (true)
    std::cout << (false || false) << std::endl; // 0 (false)
    std::cout << (!true) << std::endl; // 0 (false)

    std::cout << (1 && 0) << std::endl; // 0 (false)
    std::cout << (1 && 1) << std::endl; // 1 (true)
    std::cout << (1 || 0) << std::endl; // 1 (true)
    std::cout << (0 || 0) << std::endl; // 0 (false)
    std::cout << (!1) << std::endl; // 0 (false)

    // Comparison Operators
    int p = 5;
    std::cout << (p < 10) << std::endl; // 1 (true)
    std::cout << (p > 10) << std::endl; // 0 (false)
    std::cout << (p >= 5) << std::endl; // 1 (true)
    std::cout << (p <= 4) << std::endl; // 0 (false)
    std::cout << (p == 5) << std::endl; // 1 (true)
    std::cout << (p != 5) << std::endl; // 0 (false)

    // Bitwise Operators
    /**
     * Ther are 6 bitwise operators in C++:
     * 1. & (AND)
     * 2. | (OR)
     * 3. ^ (XOR)
     * 4. ~ (NOT)
     * 5. << (Left Shift)
     * 6. >> (Right Shift)
     */
    // Taking 8-bit unsigned integers for demonstration
    int m = 5; // 00000101 in binary
    int n = 3; // 00000011 in binary
    std::cout << (m & n) << std::endl; // 1 (00000001 in binary)
    std::cout << (m | n) << std::endl; // 7 (00000111 in binary)
    std::cout << (m ^ n) << std::endl; // 6 (00000110 in binary)
    std::cout << (~m) << std::endl; // -6 (11111010 in binary, two's complement representation)
    std::cout << (m << 1) << std::endl; // 10 (00001010 in binary) It doubles the value of m
    std::cout << (m >> 1) << std::endl; // 2 (00000010 in binary)  It halves the value of m

    return 0;
}