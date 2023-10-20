#include <iostream>

using namespace std; 

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double real = 0.0, double imag = 0.0) : real(real), imag(imag) {}

    Complex add(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex subtract(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    Complex multiply(const Complex& other) const {
        double result_real = (real * other.real) - (imag * other.imag);
        double result_imag = (real * other.imag) + (imag * other.real);
        return Complex(result_real, result_imag);
    }

    void print() const {
        if (imag >= 0) {
            cout << real << "+" << imag << "i" << endl;
        } else {
            cout << real << imag << "i" << endl;
        }
    }
};

int main() {
    double real1, imag1, real2, imag2;
    cout << "Enter real and imaginary part of first complex number:" << endl;
    cin >> real1 >> imag1;
    cout << "Enter real and imaginary part of second complex number:" << endl;
    cin >> real2 >> imag2;

    Complex complex1(real1, imag1);
    Complex complex2(real2, imag2);

    Complex sum_result = complex1.add(complex2);

    cout << "Sum of two complex numbers is" << endl;
    sum_result.print();

    return 0;
}
