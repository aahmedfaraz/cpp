# Object Oriented Programming (OOP)

OOP (Object-Oriented Programming) is a programming approach where we organize code around objects that contain data (attributes) and functions (methods) that operate on that data.

Example: A car is an object.

- Attributes: color, model, speed
- Methods: start(), stop(), accelerate()

OOP has four main principles: Encapsulation, Abstraction, Inheritance, and Polymorphism.

**Learning resource: [YouTube Tutorial by freeCodeCamp.org](https://www.youtube.com/watch?v=wN0x9eZLix4)**

## 1. Encapsulation

Encapsulation in OOP is the practice of bundling data and methods inside a class and restricting direct access to the data using access modifiers like `private` and `public`.

Example in C++:

```cpp
class BankAccount {
private:
    int balance = 0;

public:
    void deposit(int amount) {
        balance += amount;
    }

    int get_balance() {
        return balance;
    }
};
```

Here, `balance` is private, so it cannot be accessed directly from outside the class. It can be modified through the public `deposit()` method.

In simple words: Encapsulation protects an object's data by controlling how other code can access or modify it.

## 2. Abstraction

Abstraction in OOP means hiding implementation details and showing only the essential features to the user.

Example in C++:

```cpp
#include <iostream>
using namespace std;

class CoffeeMachine {
public:
    void makeCoffee() {
        cout << "Coffee is ready!" << endl;
    }
};

int main() {
    CoffeeMachine machine;
    machine.makeCoffee();

    return 0;
}
```

Output:

```
Coffee is ready!
```

**How is this abstraction?**

The user only calls `makeCoffee()` without needing to know the internal steps involved in preparing the coffee.

In simple words: Abstraction hides how something works and shows what it does.

## 3. Inheritance

Inheritance in OOP is a feature that allows a class to acquire the properties and methods of another class, enabling code reuse.

### C++ Example

```cpp
class Animal {
public:
    void eat() {
        cout << "Eating...";
    }
};

class Dog : public Animal {
};

int main() {
    Dog dog;
    dog.eat();  // Inherited from Animal
}
```

In simple words: Inheritance allows a class to reuse the properties and methods of another class.