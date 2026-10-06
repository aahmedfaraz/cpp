#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int a = 3;
    int b = 5;

    // [captured-clause](parameters){function-definition}

    std::vector<int> v{2, 3, 5, 6, 15, 18, 30};

    std::for_each(v.begin(), v.end(), [a, b](int x) {
        if (x % a == 0 and x % b == 0) {
            std::cout << x << " is divisible by both " << a << " and " << b << std::endl;
        } else if (x % a == 0) {
            std::cout << x << " is divisible by " << a << std::endl;
        } else if (x % b == 0) {
            std::cout << x << " is divisible by " << b << std::endl;
        } else {
            std::cout << x << " is not divisible by either " << a << " or " << b << std::endl;
        }
    });

    return 0;
}

// Output:

// 2 is not divisible by either 3 or 5
// 3 is divisible by 3
// 5 is divisible by 5
// 6 is divisible by 3
// 15 is divisible by both 3 and 5
// 18 is divisible by 3
// 30 is divisible by both 3 and 5