#include "car.h"
#include "logger.h"

int main()
{

    Car myCar;
    setCarValues(myCar, 5.5, 0.25, 5000, 150, 15, "Blue", "Automatic");

    displayCar(myCar);

    if (searchByColor(myCar, "Blue")) 
    {
        Logger::log("Found a car with the specified color");
    }
    else {
        Logger::log("No car found with the specified color");
    }

    Logger::log("Program ended");
    return 0;
}
