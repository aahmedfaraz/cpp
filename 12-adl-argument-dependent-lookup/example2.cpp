#include <iostream>

namespace Math {
    struct Vector {
        int x, y;
    };

    Vector operator+(const Vector& a, const Vector& b) {
        return {a.x + b.x, a.y + b.y};
    }
}

int main() {
    Math::Vector a{10, 20};
    Math::Vector b{30, 40};

    Math::Vector c = a + b; // This works because of ADL (Argument-Dependent Lookup). 
    // The operator+ function is defined in the Math namespace, which is associated 
    // with the Vector type. When we use the + operator with two Vector objects, the 
    // compiler looks for operator+ in the Math namespace and finds it.

    std::cout << c.x << " " << c.y;
}