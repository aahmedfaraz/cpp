#include <iostream>
#include "math/math.hpp"
#include "math/calculus.hpp"

using namespace std;

int main() {
    cout << "5 + 3 = " << add(5, 3) << endl;
    cout << "Derivative of 5 and 3 = " << calculate_derivative(5, 3) << endl;

    return 0;
}