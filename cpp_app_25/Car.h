#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

struct Car
{
    double length;
    double clearance;
    double engineVolume;
    double enginePower;
    double wheelDiameter;
    std::string color;
    std::string gearboxType;
};

void setCarValues(Car& car, double length, double clearance, double engineVolume, double enginePower,
    double wheelDiameter, const std::string& color, const std::string& gearboxType) 
{
    car.length = length;
    car.clearance = clearance;
    car.engineVolume = engineVolume;
    car.enginePower = enginePower;
    car.wheelDiameter = wheelDiameter;
    car.color = color;
    car.gearboxType = gearboxType;
}

void displayCar(const Car& car) 
{
    std::cout << "Car Details:\n"
        << "Length: " << car.length << " meters\n"
        << "Clearance: " << car.clearance << " meters\n"
        << "Engine Volume: " << car.engineVolume << " cubic centimeters\n"
        << "Engine Power: " << car.enginePower << " horsepower\n"
        << "Wheel Diameter: " << car.wheelDiameter << " inches\n"
        << "Color: " << car.color << "\n"
        << "Gearbox Type: " << car.gearboxType << "\n";
}

bool searchByColor(const Car& car, const std::string& targetColor)
{
    return car.color == targetColor;
}

#endif
