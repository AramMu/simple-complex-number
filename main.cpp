#include <iostream>

using namespace std;

class Complex {
public:
    Complex() : _real(0), _imag(0) {}
    Complex(double real, double imag) : _real(real), _imag(imag) {}
    double real() const {
        return _real;
    }
    double imag() const {
        return _imag;
    }
    const Complex operator + (const Complex& c) {
        return Complex(real() + c.real(), imag() + c.imag());
    }

private:
    double _real;
    double _imag;
};

int main()
{
    Complex c1(10,50), c2(-22, 8);
    Complex c3 = c1+c2;
    cout << c3.real() << " " << c3.imag() << endl;
    return 0;
}



