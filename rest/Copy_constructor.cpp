#include <iostream>
#include <cmath>

class Complex {
	double x, y;
public:
	Complex(double a, double b) : x(a), y(b) { std::cout << "complex ctor : " << x << " " << y << std::endl; };
	Complex(const Complex& c) : x(c.x), y(c.y) { std::cout << "complex copy ctor: " << x << " " << y << std::endl; };//this is copy constructor
	~Complex() { std::cout << "complex dtor" << std::endl; };

	double normal(Complex c) {
		std::cout << " the norm is: " << sqrt(c.x * c.x + c.y * c.y) << std::endl;
		return sqrt(c.x * c.x + c.y * c.y);
	}

};
int main() {
	Complex c1(1.1, 4.5);
	Complex c2(c1); //calls copy constructor
	Complex c3 = c1; // calls the copy constructor as well
}