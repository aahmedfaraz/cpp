#include "image.hpp"
#include <iostream>

Image::Image(int width, int height)
    : width(width), height(height) {}

void Image::display() const {
    std::cout << "Image dimensions: "
              << width << " x " << height << '\n';
}
