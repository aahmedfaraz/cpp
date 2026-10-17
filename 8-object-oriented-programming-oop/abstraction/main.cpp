#include <iostream>
using namespace std;

class AbstractEmployee { // abstract class
    virtual void ask_for_promotion() = 0; // pure virtual function, which means that this function must be implemented in the derived class
};

class Employee: AbstractEmployee { // classes are private by default
private: // access modifiers. There are three: public, private, and protected
    // Now these properties are encapsulated and cannot be accessed directly from outside the class
    string name;
    string company;
    int age;

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

int main() {
    Employee employee1("Ahmed", "NASA", 26);
    Employee employee2("Faraz", "SpaceX", 36);

    employee1.ask_for_promotion(); // Output: Ahmed, sorry NO promotion for you!
    employee2.ask_for_promotion(); // Output: Faraz got promoted!

    return 0;
}