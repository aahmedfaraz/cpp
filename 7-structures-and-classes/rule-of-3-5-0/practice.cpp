#include <iostream>
using namespace std;

class Faraz {
public:
    int value;

    Faraz(int v) : value(v) {
        cout << "Constructor called " << value << endl;
    }
    ~Faraz() {
        cout << "Destructor called " << value << endl;
    }
};

class Tracker {
public:
    Tracker() {
        cout << "Program Started" << endl;
    }
    ~Tracker() {
        cout << "Program Ended" << endl;
    }
};

Tracker tracker; // Global object to track program start and end

int main() {
    cout << "Main started" << endl;

    Faraz obj1(10); // Automatic storage duration (stack allocation)
    // delete &obj1; // will cause undefined behavior because obj1 is allocated on the stack and will be automatically destroyed when it goes out of scope.

    Faraz* obj2 = new Faraz(20); // Dynamic storage duration (heap allocation)
    delete obj2;
    obj2 = nullptr; // Avoid dangling pointer

    cout << "Main ended" << endl;
    return 0;
}

// Output:

// Program Started
// Main started
// Constructor called 10
// Constructor called 20
// Destructor called 20
// Main ended
// Destructor called 10
// Program Ended
