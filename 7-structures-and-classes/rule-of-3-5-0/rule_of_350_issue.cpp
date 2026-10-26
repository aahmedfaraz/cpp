
#include <iostream>
using namespace std;

class Buffer {
public:
    int* data;

    Buffer() {
        data = new int[3]{10, 20, 30};
    }

    ~Buffer() {
        delete[] data;
    }
};

int main() {
    Buffer obj1;
    Buffer obj2 = obj1; // Shallow copy, pointing to the same memory as obj1

    cout << "obj1.data: " << obj1.data << '\n';
    cout << "obj2.data: " << obj2.data << '\n';

    // Both pointers have the same address.
    cout << "obj1.data[0]: " << obj1.data[0] << '\n';
    cout << "obj2.data[0]: " << obj2.data[0] << '\n';

    // Destroying either object's array leaves the other
    // object with a dangling pointer.

    delete[] obj1.data; // Deallocate memory for obj1
    cout << "obj1.data: " << obj1.data << '\n';

    delete[] obj2.data; // App crashes here because obj2.data points to already deallocated memory
    cout << "obj2.data: " << obj2.data << '\n'; // This line will not be executed due to the crash above

    return 0;
}
