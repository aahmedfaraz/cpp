#include "imageProcessor.hpp"
#include "image.hpp"

#include <iostream>

void ImageProcessor::process(Image& image) {
    std::cout << "Processing image...\n";
    image.display();
}
