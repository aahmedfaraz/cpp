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
};

int main() {
    Developer developer1 = Developer("Ahmed", "Google", 28, "C++");
    developer1.FixBug(); // Output: Ahmed fixed bug using C++
    developer1.FixBug(); // Output: Ahmed fixed bug using C++
    developer1.FixBug(); // Output: Ahmed fixed bug using C++
    developer1.ask_for_promotion(); // Output: Ahmed, sorry NO promotion for you!
    
    Teacher teacher1 = Teacher("Faraz", "MIT", 35, "Physics");
    teacher1.prepare_lesson(); // Output: Faraz is preparing Physics lesson.
    teacher1.ask_for_promotion(); // Output: Faraz got promoted!

    return 0;
}