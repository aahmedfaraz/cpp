#pragma once

// #include "image.hpp" // Not using this because it can create circular dependencies or increase compilation time
// because all files which include this header will also include image.hpp, which is not necessary for the declaration of ImageProcessor

class Image;  // Forward declaration of a class

class ImageProcessor {
public:
    void process(Image& image);
};