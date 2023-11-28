#include "fraction.h"
#include "logger.h"
#include <iostream>
using namespace std;

int main() 
{

    cout << "Enter numerator and denominator for fraction 1: ";
    int num1, den1;
    cin >> num1 >> den1;
    Fraction fraction1(num1, den1);

    cout << "Enter numerator and denominator for fraction 2: ";
	int num2, den2;
    cin >> num2 >> den2;
	Fraction fraction2(num2, den2);


    Logger::log("Fraction 1: ");
    fraction1.display();
    Logger::log("\n");

    Logger::log("Fraction 2: ");
    fraction2.display();
    Logger::log("\n");

    Fraction sum = fraction1.add(fraction2);
    Fraction diff = fraction1.subtract(fraction2);
    Fraction prod = fraction1.multiply(fraction2);
    Fraction quot = fraction1.divide(fraction2);

    Logger::log("Sum: ");
    sum.display();
    Logger::log("\n");

    Logger::log("Difference: ");
    diff.display();
    Logger::log("\n");

    Logger::log("Product: ");
    prod.display();
    Logger::log("\n");

    Logger::log("Quotient: ");
    quot.display();
    Logger::log("\n");

    return 0;
}
