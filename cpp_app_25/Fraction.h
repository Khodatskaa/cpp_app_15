#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;

    int gcd(int a, int b)
    {
        return b == 0 ? a : gcd(b, a % b);
    }

    void simplify() 
    {
        int commonDivisor = gcd(numerator, denominator);
        numerator /= commonDivisor;
        denominator /= commonDivisor;
    }

public:
    Fraction() : numerator(0), denominator(1) {}
    Fraction(int num, int denom) : numerator(num), denominator(denom) 
    {
        simplify();
    }

    int getNumerator() const { return numerator; }
    int getDenominator() const { return denominator; }

    Fraction operator+(const Fraction& other) const
    {
        return Fraction(numerator * other.denominator + other.numerator * denominator, denominator * other.denominator);
    }

    Fraction operator-(const Fraction& other) const
    {
        return Fraction(numerator * other.denominator - other.numerator * denominator, denominator * other.denominator);
    }

    Fraction operator*(const Fraction& other) const
    {
        return Fraction(numerator * other.numerator, denominator * other.denominator);
    }

    Fraction operator/(const Fraction& other) const 
    {
        return Fraction(numerator * other.denominator, denominator * other.numerator);
    }

    Fraction toSimpleFraction() const 
    {
        int wholePart = numerator / denominator;
        int newNumerator = numerator % denominator;
        return Fraction(newNumerator, denominator);
    }

    void display() const 
    {
        std::cout << numerator << "/" << denominator;
    }
};

#endif 
