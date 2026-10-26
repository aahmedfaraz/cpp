
#include <iostream>
#include <vector>
using namespace std;

// In most real-world C++ programs, you can avoid implementing these six functions yourself by using 
// standard library types that already manage resources.

// For example, std::vector manages the array automatically.

class Buffer {
public:
    vector<int> data{10, 20, 30};

    void print() const {
        for (int value : data) {
            cout << value << " ";
        }
        cout << '\n';
    }
};

int main() {
    Buffer obj1;

    Buffer obj2 = obj1;  // Safe deep copy
    obj2.data[0] = 99;

    cout << "obj1: ";
    obj1.print();

    cout << "obj2: ";
    obj2.print();

} // Both objects clean up automatically
