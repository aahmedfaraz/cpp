#include <iostream>

class Class1 {
public:
    std::string message;
    Class1(std::string msg): message(msg) {}
    void sayClass1Message() {
        std::cout << "Class 1 says " << message << std::endl;
    }
};

class Class2 {
public:
    std::string message;
    Class2(std::string msg): message(msg) {}
    void sayClass2Message() {
        std::cout << "Class2 says " << message << std::endl;
    }
};

class Class3: public Class1, public Class2 { // multiple inheritance
public:
    std::string message;
    Class3(std::string main_msg, std::string msg1, std::string msg2): 
        Class1(msg1), Class2(msg2), message(main_msg) {}
    void sayClass3Message() {
        std::cout << "Class3 says " << message << std::endl;
    }
};

int main() {
    Class3 class3Obj("Hello from Class3", "Hello from Class1", "Hello from Class2");
    class3Obj.sayClass1Message(); // method shared by Class1
    class3Obj.sayClass2Message(); // method shared by Class2
    class3Obj.sayClass3Message(); // Class3's own method
    return 0;
}

// Output:

// Class 1 says Hello from Class1
// Class2 says Hello from Class2
// Class3 says Hello from Class3
