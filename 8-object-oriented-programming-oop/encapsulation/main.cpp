#include <iostream>
using namespace std;

class Employee { // classes are private by default
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
};

int main() {
    Employee employee1("Ahmed", "NASA", 26);
    employee1.introduce_yourself();

    Employee employee2("Faraz", "SpaceX", 27);
    employee2.introduce_yourself();

    employee1.set_age(17); // This will not change the age because of validation
    cout << employee1.get_name() << " is " << employee1.get_age() << " years old." << endl; // Output: Ahmed is 26 years old.

    employee1.set_age(30); // This will change the age because it passes validation
    cout << employee1.get_name() << " is now " << employee1.get_age() << " years old." << endl; // Output: Ahmed is now 30 years old.

    return 0;
}