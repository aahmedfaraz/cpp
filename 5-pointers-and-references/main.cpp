#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    // pointers: variable that stores the memory address of another variable
    //           because sometimes it is easier to work with memory addresses than the actual values

    // & address-of operator: returns the memory address of a variable
    // * dereference operator: returns the value stored at a memory address

    std::string name = "Ahmed";
    std::string *pName = &name; // pointer to a string variable
    std::cout << pName << std::endl; // Output: 0xe689fff9c0 (memory address of the variable)
    std::cout << *pName << std::endl; // Output: Ahmed (value stored at the memory address)

    int age = 26;
    int *pAge = &age; // pointer to an int variable
    std::cout << pAge << std::endl; // Output: 0xe689fff9bc (memory address of the variable)
    std::cout << *pAge << std::endl; // Output: 26 (value stored at the memory address)

    std::string freePizzas[5] = {"Margherita", "Pepperoni", "Hawaiian", "Veggie", "BBQ Chicken"};
    std::cout << freePizzas << std::endl; // Output: 0xe689fff9d0 (Because array is already an address)
    std::string *pFreePizzas = freePizzas; // pointer to an array of strings (No need & before the array name because the array name is already an address)
    std::cout << pFreePizzas << std::endl; // Output: 0xe689fff9d0 (memory address of the first element in the array)
    std::cout << *pFreePizzas << std::endl; // Output: Margherita (value stored at the memory address of the first element in the array)
    std::cout << *(pFreePizzas + 1) << std::endl; // Output: Pepperoni (value stored at the memory address of the second element in the array)

    // FUNCTION POINTERS: pointers that point to a function instead of a variable

    // function pointer declaration: return_type (*pointer_name)(parameter_types)
    int (*pAdd)(int, int);

    pAdd = add; // assign the address of the function to the pointer
    std::cout << pAdd << std::endl; // Output: 0x55f8e4c1d6a0 (memory address of the function)
    int result = pAdd(5, 10); // Output: 15 (call the function using the pointer)
    std::cout << result << std::endl; // Output: 15 (value returned by the function)

    // REFERENCES: alias for another variable (another name for a variable)
    std::string food = "Pizza";
    std::string &meal = food; // reference to a string variable

    // Note: Both food and meal refer to the same memory location. Changing one affects the other.

    meal = "Burger"; // change the value of the variable using the reference

    std::cout << food << std::endl; // Output: Burger
    std::cout << meal << std::endl; // Output: Burger

    return 0;
}