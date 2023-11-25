#include "point.h"
#include <string>

int main() 
{
    Point point1(5.0, 8.0);
    Point point2(3.0, 6.0);

    Logger::log("Point 1: (" + std::to_string(point1.x) + ", " + std::to_string(point1.y) + ")");
    Logger::log("Point 2: (" + std::to_string(point2.x) + ", " + std::to_string(point2.y) + ")");

    double distance = calculateDistance(point1, point2);
    Logger::log("Distance between the points: " + std::to_string(distance));

    return 0;
}
