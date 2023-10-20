#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction() : numerator(0), denominator(1) {} // Default constructor to initialize to 0

    Fraction(int a, int b) : numerator(a), denominator(b) {} // Parametrized constructor

    Fraction addFraction(Fraction other) {
        int newNum = (numerator * other.denominator) + (other.numerator * denominator);
        int newDenom = denominator * other.denominator;
        return Fraction(newNum, newDenom);
    }

    Fraction subFraction(Fraction other) {
        int newNum = (numerator * other.denominator) - (other.numerator * denominator);
        int newDenom = denominator * other.denominator;
        return Fraction(newNum, newDenom);
    }

    Fraction mulFraction(Fraction other) {
        int newNum = numerator * other.numerator;
        int newDenom = denominator * other.denominator;
        return Fraction(newNum, newDenom);
    }

    Fraction divFraction(Fraction other) {
        int newNum = numerator * other.denominator;
        int newDenom = denominator * other.numerator;
        return Fraction(newNum, newDenom);
    }

    int getNum() {
        return numerator;
    }

    int getDenom() {
        return denominator;
    }

    void Set(int a, int b) {
        numerator = a;
        denominator = b;
    }
};

int main() {
    Fraction half(1, 2);
    Fraction quarter(1, 4);

    Fraction sum = half.addFraction(quarter);
    Fraction difference = half.subFraction(quarter);
    Fraction product = half.mulFraction(half);
    Fraction quotient = half.divFraction(half);

    std::cout << "1/2 + 1/4 = " << sum.getNum() << "/" << sum.getDenom() << std::endl;
    std::cout << "1/2 - 1/4 = " << difference.getNum() << "/" << difference.getDenom() << std::endl;
    std::cout << "1/2 * 1/2 = " << product.getNum() << "/" << product.getDenom() << std::endl;
    std::cout << "1/2 / 1/2 = " << quotient.getNum() << "/" << quotient.getDenom() << std::endl;

    return 0;
}
