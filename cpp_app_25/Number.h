#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>

class ComplexNumber
{
private:
    double real;
    double imaginary;

public:
    ComplexNumber() : real(0.0), imaginary(0.0) {}
    ComplexNumber(double real, double imaginary) : real(real), imaginary(imaginary) {}

    double getReal() const 
    {
        return real;
    }

    double getImaginary() const
    {
        return imaginary;
    }

    ComplexNumber operator+(const ComplexNumber& other) const
    {
        return ComplexNumber(real + other.real, imaginary + other.imaginary);
    }

    ComplexNumber operator-(const ComplexNumber& other) const 
    {
        return ComplexNumber(real - other.real, imaginary - other.imaginary);
    }

    ComplexNumber operator*(const ComplexNumber& other) const
    {
        return ComplexNumber(
            real * other.real - imaginary * other.imaginary,
            real * other.imaginary + imaginary * other.real
        );
    }

    ComplexNumber operator/(const ComplexNumber& other) const 
    {
        double denominator = other.real * other.real + other.imaginary * other.imaginary;
        return ComplexNumber(
            (real * other.real + imaginary * other.imaginary) / denominator,
            (imaginary * other.real - real * other.imaginary) / denominator
        );
    }

    void display() const 
    {
        std::cout << real << " + " << imaginary << "";
    }
};

#endif 
