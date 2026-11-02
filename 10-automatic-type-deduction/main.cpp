#include <iostream>
#include <vector>

int myAdd(int a, int b) { return a+b; }

int main() {
    auto myStr = "Ahmed";
    auto myDoub = 3.14;
    auto myInt = 10;

    std::cout << myStr << std::endl;
    std::cout << myDoub << std::endl;
    std::cout << myInt << std::endl;

    // ===========================
    auto func = []{ return 5; };
    std::cout << func << " - " << func() << std::endl;

    // ===========================
    auto myInt2{2026};
    auto myInt3{2027};

    // ===========================
    // define an int-value
    int i = 5; // explicit
    auto j = 5; // auto

    // define a reference to an int
    int& k = i; // explicit
    auto& l = i; // auto

    // define a pointer to a function
    int (*add)(int, int) = myAdd; // explicit
    auto add1 = myAdd; // auto
    
    // iterate through a vector
    std::vector<int> vec;
    for (std::vector<int>::iterator it=vec.begin(); it != vec.end(); ++it) {} // explicit
    for (auto it=vec.begin(); it != vec.end(); ++it) {} // auto

    return 0;
}