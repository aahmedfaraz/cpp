
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

class Buffer {
private:
    static constexpr int SIZE = 3;

public:
    int* data;

    // 1. Constructor
    Buffer() : data(new int[SIZE]{10, 20, 30}) {
        cout << "Constructor\n";
    }

    // 2. Destructor
    ~Buffer() {
        delete[] data;
        cout << "Destructor\n";
    }

    // 3. Copy constructor: deep copy
    Buffer(const Buffer& other) : data(new int[SIZE]) {
        copy(other.data, other.data + SIZE, data);
        cout << "Copy constructor\n";
    }

    // 4. Copy assignment operator: deep copy
    Buffer& operator=(const Buffer& other) {
        if (this != &other) {
            int* newData = new int[SIZE];
            copy(other.data, other.data + SIZE, newData);

            delete[] data;
            data = newData;
        }

        cout << "Copy assignment\n";
        return *this;
    }

    // 5. Move constructor: transfer ownership
    Buffer(Buffer&& other) noexcept : data(other.data) {
        other.data = nullptr;
        cout << "Move constructor\n";
    }

    // 6. Move assignment operator: transfer ownership
    Buffer& operator=(Buffer&& other) noexcept {
        if (this != &other) {
            delete[] data;

            data = other.data;
            other.data = nullptr;
        }

        cout << "Move assignment\n";
        return *this;
    }

    void print() const {
        for (int i = 0; i < SIZE; i++) {
            cout << data[i] << " ";
        }
        cout << '\n';
    }
};

int main() {
    cout << "--- Create obj1 ---\n";
    Buffer obj1;
    obj1.print();

    cout << "\n--- Copy construct obj2 ---\n";
    Buffer obj2 = obj1;
    obj2.data[0] = 99;

    cout << "obj1: ";
    obj1.print();

    cout << "obj2: ";
    obj2.print();

    cout << "\n--- Copy assign obj3 ---\n";
    Buffer obj3;
    obj3 = obj1;
    obj3.print();

    cout << "\n--- Move construct obj4 ---\n";
    Buffer obj4 = std::move(obj1);
    obj4.print();

    cout << "\n--- End of main ---\n";
}

// Summary

// Rule of Three
// Custom destructor + copy constructor + copy assignment.
// Useful when learning or maintaining classes that own raw resources.

// Rule of Five
// The Rule of Three plus move constructor and move assignment.
// Adds explicit ownership transfer for efficient moves.

// Rule of Zero
// Use resource-managing types instead of manually managing raw resources.
// Usually the preferred approach in modern C++.