#include "image.hpp"
#include "imageProcessor.hpp"

int main() {
    Image image(1920, 1080);

    ImageProcessor processor;
    processor.process(image);

    return 0;
}

// Output:

// Processing image...
// Image dimensions: 1920 x 1080