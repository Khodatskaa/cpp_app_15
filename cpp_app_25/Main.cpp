// main.cpp

#include "number.h"
#include "logger.h"

int main() {
    ComplexNumber num1(5.0, 7.0);
    ComplexNumber num2(1.0, 3.0);

    Logger::log("Complex Number 1: ");
    num1.display();
    Logger::log("\n");

    Logger::log("Complex Number 2: ");
    num2.display();
    Logger::log("\n");

    ComplexNumber sum = num1 + num2;
    Logger::log("Sum: ");
    sum.display();
    Logger::log("\n");

    ComplexNumber diff = num1 - num2;
    Logger::log("Difference: ");
    diff.display();
    Logger::log("\n");

    ComplexNumber product = num1 * num2;
    Logger::log("Product: ");
    product.display();
    Logger::log("\n");

    ComplexNumber quotient = num1 / num2;
    Logger::log("Quotient: ");
    quotient.display();
    Logger::log("\n");

    return 0;
}
