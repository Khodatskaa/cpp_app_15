#include "Fraction.h"

Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {}

void Fraction::reduce() {}

void Fraction::toMixedNumber() {}

int Fraction::getNumerator() const {
    return numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}

Fraction Fraction::add(const Fraction& other) const {
    // a/b + c/d = (ad + bc) / bd
    int newNumerator = numerator * other.denominator + other.numerator * denominator;
    int newDenominator = denominator * other.denominator;

    return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::subtract(const Fraction& other) const {
    // a/b - c/d = (ad - bc) / bd
    int newNumerator = numerator * other.denominator - other.numerator * denominator;
    int newDenominator = denominator * other.denominator;

    return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::multiply(const Fraction& other) const {
    // a/b * c/d = ac / bd
    int newNumerator = numerator * other.numerator;
    int newDenominator = denominator * other.denominator;

    return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::divide(const Fraction& other) const {
    // a/b / c/d = ad / bc
    int newNumerator = numerator * other.denominator;
    int newDenominator = denominator * other.numerator;

    return Fraction(newNumerator, newDenominator);
}

void Fraction::display() const {
    std::cout << numerator << "/" << denominator;
}

