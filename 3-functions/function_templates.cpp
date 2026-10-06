// learned from this video: https://www.youtube.com/watch?v=spZd2rNtze8

#include <iostream>

template <typename T, typename U>

auto max(T a, U b) {
    return (a > b) ? a : b;
}

int main() {
    std::cout << max(3.14, 2.2) << std::endl; // Output: 3.14
    return 0;
}