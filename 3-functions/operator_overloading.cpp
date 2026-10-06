#include <iostream>
using namespace std;

// Operator Overloading is Compile-time Polymorphism.
// Same operator can have different implementations based on the types of operands passed to it.
// For example, the '+' operator can be used to add two integers, or concatenate two strings, etc.

class Channel {
    int subscribers;

    public:
        Channel(int s) {
            subscribers = s;
        }
        
        void operator++() { // Overloading the '++' operator
            subscribers++;
        }

        void operator--() { // Overloading the '--' operator
            subscribers--;
        }

        void operator+(int s) { // Overloading the '+' operator
            subscribers += s;
        }

        void operator-(int s) { // Overloading the '-' operator
            subscribers -= s;
        }

        void operator=(int s) { // Overloading the '=' operator
            subscribers = s;
        }

        void operator+=(int s) { // Overloading the '+=' operator
            subscribers += s;
        }

        void operator-=(int s) { // Overloading the '-=' operator
            subscribers -= s;
        }

        void operator==(int s) { // Overloading the '==' operator
            if (subscribers == s) {
                cout << "Subscribers are equal to " << s << endl;
            } else {
                cout << "Subscribers are not equal to " << s << endl;
            }
        }

        void operator!=(int s) { // Overloading the '!=' operator
            if (subscribers != s) {
                cout << "Subscribers are not equal to " << s << endl;
            } else {
                cout << "Subscribers are equal to " << s << endl;
            }
        }

        void operator>(int s) { // Overloading the '>' operator
            if (subscribers > s) {
                cout << "Subscribers are greater than " << s << endl;
            } else {
                cout << "Subscribers are not greater than " << s << endl;
            }
        }

        void operator<(int s) { // Overloading the '<' operator
            if (subscribers < s) {
                cout << "Subscribers are less than " << s << endl;
            } else {
                cout << "Subscribers are not less than " << s << endl;
            }
        }

        void operator>=(int s) { // Overloading the '>=' operator
            if (subscribers >= s) {
                cout << "Subscribers are greater than or equal to " << s << endl;
            } else {
                cout << "Subscribers are not greater than or equal to " << s << endl;
            }
        }

        void operator<=(int s) { // Overloading the '<=' operator
            if (subscribers <= s) {
                cout << "Subscribers are less than or equal to " << s << endl;
            } else {
                cout << "Subscribers are not less than or equal to " << s << endl;
            }
        }

        void operator!() { // Overloading the '!' operator
            if (subscribers == 0) {
                cout << "No subscribers!" << endl;
            } else {
                cout << "Subscribers are present." << endl;
            }
        }

        void operator~() { // Overloading the '~' operator
            cout << "Total subscribers: " << subscribers << endl;
        }

        void operator[](int index) { // Overloading the '[]' operator
            cout << "Accessing subscriber at index " << index << endl;
        }

        void operator()() { // Overloading the '()' operator
            cout << "Channel has " << subscribers << " subscribers." << endl;
        }

        void operator<<(ostream &out) { // Overloading the '<<' operator
            out << "Subscribers: " << subscribers << endl;
        }

        void operator>>(istream &in) { // Overloading the '>>' operator
            cout << "Enter number of subscribers: ";
            in >> subscribers;
        }

        void display() {
            cout << "Subscribers: " << subscribers << endl;
        }
};

int main () {
    int  a = 5;
    int  b = 10;
    char c = 'c';
    char d = 'd';
    bool t = true;
    bool f = false;

    cout << "int + int = "   << (a + b) << endl; // 5 + 10 = 15
    cout << "char + char = " << (c + d) << endl; // in C++, char values are treated as integers when you do arithmetic. 'c'=99 and 'd'=100.
    cout << "int + char = "  << (a + c) << endl; // 'c'=99, so 5 + 99 = 104
    cout << "bool + bool = " << (t + f) << endl; // true is 1 and false is 0, so 1 + 0 = 1
    cout << "int + char + bool = " << (a + c + t) << endl; // 5 + 99 + 1 = 105

    Channel ch(100);
    ch.display(); // Subscribers: 100
    ++ch; // Using the overloaded '++' operator
    ch.display(); // Subscribers: 101
    --ch; // Using the overloaded '--' operator
    ch.display(); // Subscribers: 100
    ch + 5; // Using the overloaded '+' operator
    ch.display(); // Subscribers: 105
    ch - 3; // Using the overloaded '-' operator
    ch.display(); // Subscribers: 102
    ch += 10; // Using the overloaded '+=' operator
    ch.display(); // Subscribers: 112
    ch -= 5; // Using the overloaded '-=' operator
    ch.display(); // Subscribers: 107
    ch == 100; // Using the overloaded '==' operator // Subscribers are not equal to 100
    ch != 101; // Using the overloaded '!=' operator // Subscribers are not equal to 101
    ch > 50; // Using the overloaded '>' operator // Subscribers are greater than 50
    ch < 200; // Using the overloaded '<' operator // Subscribers are less than 200
    ch >= 100; // Using the overloaded '>=' operator // Subscribers are greater than or equal to 100
    ch <= 150; // Using the overloaded '<=' operator // Subscribers are less than or equal to 150
    !ch; // Using the overloaded '!' operator // Subscribers are present.
    ~ch; // Using the overloaded '~' operator // Total subscribers: 107
    ch[5]; // Using the overloaded '[]' operator // Accessing subscriber at index 5
    ch(); // Using the overloaded '()' operator // Channel has 107 subscribers.
    ch << cout; // Using the overloaded '<<' operator // Subscribers: 107
    ch >> cin; // Using the overloaded '>>' operator // Enter number of subscribers:

    return 0;
}

// OUTPUT:

// int + int = 15
// char + char = 199
// int + char = 104
// bool + bool = 1
// int + char + bool = 105

// Subscribers: 100
// Subscribers: 101
// Subscribers: 100
// Subscribers: 105
// Subscribers: 102
// Subscribers: 112
// Subscribers: 107
// Subscribers are not equal to 100
// Subscribers are not equal to 101
// Subscribers are greater than 50
// Subscribers are less than 200
// Subscribers are greater than or equal to 100
// Subscribers are less than or equal to 150
// Subscribers are present.
// Total subscribers: 107
// Accessing subscriber at index 5
// Channel has 107 subscribers.
// Subscribers: 107
// Enter number of subscribers: 