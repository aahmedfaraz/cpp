#include <iostream>

int main() {
    // Loops

    // For Loop
    for (int i = 0; i < 5; i++) {
        std::cout << i << std::endl;
    }

    // While Loop
    int i = 11;
    while (i <= 15) {
        std::cout << i << std::endl;
        i++;
    }

    // Do-While Loop
    int j = 21;
    do {
        std::cout << j << std::endl;
        j++;
    } while (j <= 25);

    // If-Else Statement
    int k = 1;
    if (int a = 10; k > 5) {
        std::cout << "k is greater than 5" << std::endl;
        std::cout << "a is: " << a << std::endl;
    } else if (int a = 20; k < 5) {
        std::cout << "k is less than 5" << std::endl;
        std::cout << "a is: " << a << std::endl;
    } else {
        std::cout << "k is equal to 5" << std::endl;
    }
    // output: k is less than 5

    // Switch Statement
    int age = 26;
    switch (age) {
        case 18:
            std::cout << "You are 18 years old." << std::endl;
            break;
        case 25:
            std::cout << "You are 25 years old." << std::endl;
            break;
        case 26:
            std::cout << "You are 26 years old." << std::endl;
            break;
        default:
            std::cout << "You are not 18, 25, or 26 years old." << std::endl;
            break;
    }
    // output: You are 26 years old.

    // Goto Statement
    goto label;
    std::cout << "This line will be skipped." << std::endl;
    label:
        std::cout << "This is a goto statement." << std::endl;
    // output: This is a goto statement.

    return 0;
}