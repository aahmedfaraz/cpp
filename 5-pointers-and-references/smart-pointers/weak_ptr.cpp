#include <iostream>
#include <memory>
#include <string>
using namespace std;

// A weak_ptr is a non-owning reference to an object managed by shared_ptr.

// It lets you observe an object without increasing its strong reference count or keeping it alive.

// Imagine that your friend owns a car. You can keep track of the car, but that doesn't make you an owner of it.

class Student {
public:
    string name;

    Student(string n) : name(n) {
        cout << "Student created: " << name << '\n';
    }

    ~Student() {
        cout << "Student destroyed: " << name << '\n';
    }

    void introduce() {
        cout << "Hi, I am " << name << '\n';
    }
};

int main() {
    cout << "--- Step 1: Create shared_ptr ---\n";

    auto student = make_shared<Student>("Ahmed"); // Student created: Ahmed

    cout << "Reference count: " << student.use_count() << '\n'; // Reference count: 1

    cout << "\n--- Step 2: Create weak_ptr ---\n";

    weak_ptr<Student> weak = student; // weak_ptr does not increase the reference count

    cout << "Reference count: " << student.use_count() << '\n'; // Reference count: 1

    cout << "Is expired? " << weak.expired() << '\n'; // Is expired? 0 (false, the object is still alive)

    cout << "\n--- Step 3: Use lock() ---\n";

    {
        auto locked = weak.lock(); // lock() returns a shared_ptr if the object is still alive, otherwise it returns nullptr

        if (locked) {
            cout << "lock() succeeded!\n";

            locked->introduce();

            cout << "Reference count: "
                 << student.use_count() << '\n';
        }

        // Output: 
        //         lock() succeeded!
        //         Hi, I am Ahmed
        //         Reference count: 2
    }

    cout << "Reference count after locked goes out of scope: " << student.use_count() << '\n'; // Reference count after locked goes out of scope: 1

    cout << "\n--- Step 4: Release shared_ptr ---\n";

    student.reset(); // Student destroyed: Ahmed

    cout << "Is expired? " << weak.expired() << '\n'; // Is expired? 1 (true, the object has been destroyed)

    cout << "\n--- Step 5: Try lock() again ---\n";

    auto locked = weak.lock(); // lock() returns nullptr since the object has been destroyed

    if (locked) {
        cout << "Object still exists.\n";
    } else {
        cout << "lock() failed: object is gone.\n";
    }

    // Output: lock() failed: object is gone.

    cout << "\n--- Program ending ---\n";

    return 0;
}

// weak.expired() checks whether the object has already been destroyed.
// weak.lock() tries to obtain a shared_ptr to the object, if it is still alive.

// Output:

// --- Step 1: Create shared_ptr ---
// Student created: Ahmed
// Reference count: 1

// --- Step 2: Create weak_ptr ---
// Reference count: 1
// Is expired? 0

// --- Step 3: Use lock() ---
// lock() succeeded!
// Hi, I am Ahmed
// Reference count: 2
// Reference count after locked goes out of scope: 1

// --- Step 4: Release shared_ptr ---
// Student destroyed: Ahmed
// Is expired? 1

// --- Step 5: Try lock() again ---
// lock() failed: object is gone.

// --- Program ending ---
