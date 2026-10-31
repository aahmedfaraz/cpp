#include <iostream>
#include <memory>

// A shared_ptr allows multiple smart pointers to share ownership of the same object.

// Imagine a shared resource used by multiple parts of your program. 
// The object stays alive until the last owning shared_ptr releases it.

int main() {
    auto ptr1 = std::make_shared<int>(100);

    {
        auto ptr2 = ptr1;
        std::cout << ptr1.use_count() << '\n'; // 2
    }

    std::cout << ptr1.use_count() << '\n'; // 1
}

// One caution: shared_ptr has reference-counting overhead. Also, 
// if two objects own each other through shared_ptr, they can form a reference cycle, 
// keeping both alive indefinitely. That's one reason weak_ptr exists.