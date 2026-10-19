#include <iostream>

class University {
public:
    std::string name;
    University(std::string name): name(name) {}
    void uni_name() {
        std::cout << "Welcome to " << name << " University" << std::endl;
    }
};

class Department {
public:
    std::string name;
    Department(std::string name): name(name) {}
    void dept_name() {
        std::cout << "Welcomer to " << name << " department" << std::endl;
    }
};

class Student: public University, public Department { // multiple inheritance
public:
    std::string name;
    Student(std::string uniName, std::string deptName, std::string name): University(uniName), Department(deptName), name(name) {}
    void std_name() {
        std::cout << "I am " << name << " from department " << Department::name << " of " << University::name << " University" << std::endl;
    }
};

int main() {
    Student s("MIT", "Computer Science", "Faraz");
    s.uni_name();
    s.dept_name();
    s.std_name();
    return 0;
}