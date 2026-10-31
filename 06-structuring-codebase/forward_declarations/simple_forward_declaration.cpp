#include <iostream>

int add(int a, int b);  // Forward declaration

class Image;  // Forward declaration of a class

class ImageProcessor {
public:
    void process(Image* image);
};

int main() {
    std::cout << add(10, 20) << '\n';
}

int add(int a, int b) { // Function definition
    return a + b;
}

class Image { // Class definition
public:
    int width;
    int height;
};