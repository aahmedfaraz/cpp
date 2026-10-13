#include <iostream>

// class members are private by default.
class Image {
private:
    int width;
    int height;

public:
    // constructor
    Image(int w, int h) : width(w), height(h) {}

    void setDimensions(int w, int h) {
        width = w;
        height = h;
    }

    void display() {
        std::cout << width << " x " << height << '\n';
    }
};

// a class can have public data
// class Image {
// public:
//     int width;
//     int height;
// };

// Inheritance
class ImageWithAlpha : public Image {
private:
    int alphaChannel;
    
public:
    // constructor
    ImageWithAlpha(int w, int h, int a) : Image(w, h), alphaChannel(a) {}

    void display() {
        Image::display();
        std::cout << "Alpha: " << alphaChannel << '\n';
    }
};

int main() {
    Image image(720, 1080);
    ImageWithAlpha imageWithAlpha(720, 1080, 1);

    // image.width = 1920; // compile error: 'width' is private within this context

    image.setDimensions(1920, 1080);
    image.display();
    imageWithAlpha.display();
}

// Output:

// 1920 x 1080
// 720 x 1080
// Alpha: 1

// --------------------------

// Use class for types that manage state and behavior

// Examples: bank accounts, image processors, database connections, and resource managers.

// class BankAccount {
// private:
//     double balance = 0;

// public:
//     void deposit(double amount) {
//         if (amount > 0) {
//             balance += amount;
//         }
//     }

//     double getBalance() const {
//         return balance;
//     }
// };

// Use it when you want to enforce rules and control how the object's state changes.