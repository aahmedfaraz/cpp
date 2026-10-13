#pragma once

class Image {
public:
    int width;
    int height;

    Image(int width, int height);

    void display() const;
};
