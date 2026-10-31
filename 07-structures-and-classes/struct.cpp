#include <iostream>

// A struct (structure) groups related data into a single type.

// Imagine you want to represent an image with a width, height, and number of color channels.

// struct members are public by default.
struct Image {
    int width;
    int height;
    int channels;

    // constructor
    Image(int w, int h, int c) : width(w), height(h), channels(c) {}
};

// You can make a struct's members private
// struct Image {
// private:
//     int width;
//     int height;

// public:
//     void setWidth(int w) {
//         width = w;
//     }
// };

// Inheritance
struct ImageWithAlpha : public Image {
    int alphaChannel;

    // constructor
    ImageWithAlpha(int w, int h, int c, int a) : Image(w, h, c), alphaChannel(a) {}
};

int main() {
    Image image(1920, 1080, 3);
    ImageWithAlpha imageWithAlpha(1920, 1080, 3, 1);

    // image.width = 1920;
    // image.height = 1080;
    // image.channels = 3;

    std::cout << image.width << '\n';
    std::cout << image.height << '\n';
    std::cout << image.channels << '\n';

    std::cout << imageWithAlpha.width << '\n';
    std::cout << imageWithAlpha.height << '\n';
    std::cout << imageWithAlpha.channels << '\n';
    std::cout << imageWithAlpha.alphaChannel << '\n';
}

// Output:

// 1920
// 1080
// 3

// 1920
// 1080
// 3
// 1

// --------------------------

// Use struct for simple data types

// Examples: coordinates, RGB colors, configuration settings, and simple records.

// struct Point {
//     double x;
//     double y;
// };

// Use it when directly accessing and modifying the fields is appropriate.