#include "logger.h"
#include "fraction.h"

int main() 
{
    Logger::log("Creating fractions...");
    Fraction frac1(2, 4);
    Fraction frac2(5, 8);

    Logger::log("Performing arithmetic operations...");
    Fraction sum = frac1 + frac2;
    Fraction diff = frac1 - frac2;
    Fraction product = frac1 * frac2;
    Fraction quotient = frac1 / frac2;

    Logger::log("Displaying results...");
    std::cout << "Sum: ";
    sum.display();
    std::cout << std::endl;

    std::cout << "Difference: ";
    diff.display();
    std::cout << std::endl;

    std::cout << "Product: ";
    product.display();
    std::cout << std::endl;

    std::cout << "Quotient: ";
    quotient.display();
    std::cout << std::endl;

    Logger::log("Converting improper fraction to simple fraction...");
    Fraction improper(7, 4);
    Fraction simple = improper.toSimpleFraction();

    std::cout << "Improper Fraction: ";
    improper.display();
    std::cout << " => Simple Fraction: ";
    simple.display();
    std::cout << std::endl;

    return 0;
}
