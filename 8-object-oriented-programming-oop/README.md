# Object Oriented Programming (OOP)

OOP (Object-Oriented Programming) is a programming approach where we organize code around objects that contain data (attributes) and functions (methods) that operate on that data.

Example: A car is an object.

- Attributes: color, model, speed
- Methods: start(), stop(), accelerate()

OOP has four main principles: Encapsulation, Abstraction, Inheritance, and Polymorphism.

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