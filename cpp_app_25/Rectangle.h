#ifndef Rectangle_h
#define Rectangle_h

#include "logger.h"
#include <string>


struct Rectangle
{
private:
    int x, y;
    int width, height;

public:
    Rectangle(int initialX, int initialY, int initialWidth, int initialHeight)
        : x(initialX), y(initialY), width(initialWidth), height(initialHeight) {}

    void move(int deltaX, int deltaY)
    {
        x += deltaX;
        y += deltaY;

        Logger::log("Rectangle moved");
    }

    void resize(int newWidth, int newHeight)
    {
        width = newWidth;
        height = newHeight;

        Logger::log("Rectangle resized");
    }

    void print() const {
        Logger::log("Rectangle:");
        Logger::log("Position: (" + std::to_string(x) + ", " + std::to_string(y) + ")");
        Logger::log("Size: " + std::to_string(width) + " x " + std::to_string(height));
    }
};

#endif 
