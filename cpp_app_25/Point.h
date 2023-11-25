#ifndef Point_h
#define Point_h

#include "logger.h"

struct Point 
{
    double x, y;

    Point(double initialX, double initialY)
        : x(initialX), y(initialY) {}
};

double calculateSquaredDistance(const Point& p1, const Point& p2)
{
    double deltaX = p2.x - p1.x;
    double deltaY = p2.y - p1.y;

    return deltaX * deltaX + deltaY * deltaY;
}

double calculateDistance(const Point& p1, const Point& p2)
{
    return std::sqrt(calculateSquaredDistance(p1, p2));
}

#endif