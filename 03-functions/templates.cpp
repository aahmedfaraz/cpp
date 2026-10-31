// learned from this video: https://www.youtube.com/watch?v=spZd2rNtze8

#include <iostream>

template <typename T, typename U> // Function Template
auto max(T a, U b) {
    return (a > b) ? a : b;
}

template <class X> // Class Template
class Demo {
private:
    X num1, num2;
public:
    Demo(X n1, X n2) {
        num1 = n1;
        num2 = n2;
    }

    void check() {
        if (num1 > num2) {
            std::cout << num1 << " is greater number" << std::endl;
        } else {
            std::cout << num2 << " is greater number" << std::endl;
        }
    }
};

int main() {
    std::cout << max(3.14, 2.2) << std::endl; // Output: 3.14

    Demo<float> obj1(10.5, 20.5);
    obj1.check(); // Output: 20.5 is greater number
    Demo<int> obj2(200, 20);
    obj2.check(); // Output: 200 is greater number

    return 0;
}