#include <iostream>

// Namespace: provides a solution for preventing name conflicts in large projects. Each entity needs a unique name.
// A namespace allows for identically named entities as ong as the namespaces are different. 
// The entities can be functions, classes, variables, etc.

// If we create namespaces, two or more entities can shared the same name.

// The scope resolution operator (::) is used to access the entities in a namespace.

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    // int x = 0;

    // std::cout << x << "\n"; // Refers to the local variable x
    // std::cout << first::x << "\n"; // Refers to the variable x in the first namespace
    // std::cout << second::x << "\n"; // Refers to the variable x

    using namespace first; // Using the first namespace
    std::cout << x << "\n"; // Refers to the local variable x (if int x= 0; is uncommented) or the variable x in the first namespace

    // using namespace second; // Using the second namespace
    // std::cout << x << "\n"; // Refers to the local variable x (if int x= 0; is uncommented) or the variable x in the second namespace

    std::cout << second::x << "\n"; // Refers to the variable x in the second namespace

    return 0;
}