
#include <iostream>
using namespace std;

class Animal {
public:
    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* animal = new Dog();

    Dog* dog = dynamic_cast<Dog*>(animal);
    Cat* cat = dynamic_cast<Cat*>(animal); // This will return nullptr because animal is not a Cat.

    if (animal != nullptr) {
        cout << "The animal is a valid pointer." << endl;
    } else {
        cout << "The animal is a null pointer." << endl;
    }
    // Output: The animal is a valid pointer.

    if (dog != nullptr) {
        dog->bark();
    } else {
        cout << "The animal is not a Dog." << endl;
    }
    // Output: Woof!

    if (cat != nullptr) {
        cat->meow();
    } else {
        cout << "The animal is not a Cat." << endl;
    }
    // Output: The animal is not a Cat.
    // Because the dynamic_cast failed, cat is a null pointer.

    delete animal;
    return 0;
}
