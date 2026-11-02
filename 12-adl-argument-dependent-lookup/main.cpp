#include <iostream>

// When you call a function, C++ doesn't always look only in the current scope. 
// It can also look inside the namespaces associated with the argument types.

namespace MyNamespace {
    struct Person {};

    void greet(Person p) {
        std::cout << "Hello from MyNamespace!\n";
    }
}

int main() {
    MyNamespace::Person p;

    greet(p); // How does this work?
}

// Notice something interesting:
// - greet() belongs to MyNamespace.
// - We are calling greet() without writing MyNamespace::greet().
// - There is no greet() function in the global namespace.
// Yet, this code compiles!

// Why? Because of ADL.

// The compiler sees that the argument p has type MyNamespace::Person.

// It then searches the associated namespace of that type, which is MyNamespace, and finds greet().