#include <iostream>
using namespace std;

class Employee { // classes are private by default
public: // access modifiers. There are three: public, private, and protected
    string name;
    string company;
    int age;

    void introduce_yourself() {
        cout << "Name - " << name << endl;
        cout << "Company - " << company << endl;
        cout << "Age - " << age << endl;
    }

    // Three rules of constructors:
    // 1. They must have the same name as the class
    // 2. They do not have a return type
    // 3. They have to be public so that we can access them outside the class
    Employee (string name, string company, int age) { // constructor
        this->name = name;
        this->company = company;
        this->age = age;
    }
};

int main() {
    Employee employee1("Ahmed", "NASA", 26);
    employee1.introduce_yourself();
    // Name - Ahmed
    // Company - NASA
    // Age - 26

    Employee employee2("Faraz", "SpaceX", 27);
    employee2.introduce_yourself();
    // Name - Faraz
    // Company - SpaceX
    // Age - 27

    return 0;
}