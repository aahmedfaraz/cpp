#include <iostream>
using namespace std;

class AbstractEmployee { // abstract class
    virtual void ask_for_promotion() = 0; // pure virtual function, which means that this function must be implemented in the derived class
};

class Employee: AbstractEmployee { // classes are private by default
private: // access modifiers. There are three: public, private, and protected
    // Now these properties are encapsulated and cannot be accessed directly from outside the class
    string company;
    int age;
protected:
    string name;
public:
    void set_name(string name) { // setter
        this->name = name;
    }
    string get_name() { // getter
        return name;
    }
    void set_company(string company) {
        this->company = company;
    }
    string get_company() {
        return company;
    }
    void set_age(int age) {
        if (age >= 18) { // validation
            this->age = age;
        }
    }
    int get_age() {
        return age;
    }

    void introduce_yourself() {
        cout << "Name - " << name << endl;
        cout << "Company - " << company << endl;
        cout << "Age - " << age << endl;
    }
    Employee (string name, string company, int age) { // constructor
        this->name = name;
        this->company = company;
        this->age = age;
    }
    void ask_for_promotion() { // implementation of the pure virtual function
        if (age > 30)
            cout << name << " got promoted!" << endl;
        else
            cout << name << ", sorry NO promotion for you!" << endl;
    }
    
    // The `const` after () means this function promises not to modify the object's member variables.
    // `override` means, I intend to replace a virtual function inherited from the base class. Please check that I'm doing it correctly.
    virtual void work() const {
        cout << name << " is checking emails, task backlog, performing tasks..." << endl;
    }

    virtual ~Employee() = default; // // Virtual destructor ensures derived class destructors are called when deleting objects through base-class pointers.
    // and default tells the compiler to generate the default implementation of the destructor.
};

class Developer: public Employee { // inheritance
public:
    string fav_programming_language;
    
    Developer(string name, string company, int age, string fav_programming_language)
        : Employee(name, company, age)
    {
        this->fav_programming_language = fav_programming_language;
    }   
    void FixBug() {
        cout << name << " fixed bug using " << fav_programming_language << endl;
    }
    void work() const override { // overriding the base class method (polymorphism)
        cout << name << " is writing " << fav_programming_language << " code" << endl;
    }
};

class Teacher: public Employee { // inheritance
public:
    string subject;

    void prepare_lesson() {
        cout << name << " is preparing " << subject << " lesson." << endl;
    }
    Teacher(string name, string company, int age, string subject)
        : Employee(name, company, age)
    {
        this-> subject = subject;
    }
    void work() const override { // overriding the base class method (polymorphism)
        cout << name << " is teaching " << subject << endl;
    }
};

int main() {
    Developer developer1 = Developer("Ahmed", "Google", 28, "C++");
    Teacher teacher1 = Teacher("Faraz", "MIT", 35, "Physics");

    Employee* employee2 = &developer1; // pointer to base class pointing to derived class object
    Employee* employee3 = &teacher1; // pointer to base class pointing to derived class object

    employee2->work(); // Output: Ahmed is writing C++ code
    employee3->work(); // Output: Faraz is teaching Physics

    return 0;
}