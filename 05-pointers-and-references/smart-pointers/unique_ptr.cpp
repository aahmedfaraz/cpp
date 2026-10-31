#include <iostream>
#include <memory>

// A unique_ptr means one smart pointer exclusively owns an object.

// Think of it like owning a car: one person owns it, and that ownership cannot simply be duplicated.

int main() {
    std::unique_ptr<int> ptr = std::make_unique<int>(100);

    std::cout << *ptr << '\n';  // 100

    *ptr = 200;
    std::cout << *ptr << '\n';  // 200

    // Transfer ownership of the unique_ptr to another unique_ptr
    std::unique_ptr<int> ptr2 = std::move(ptr);

    if (!ptr) {
        std::cout << "ptr is now null after move.\n";
    }

    std::cout << *ptr2 << '\n';  // 200

    return 0;
}