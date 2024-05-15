#include <iostream>

class complex {
	double re, im;
public:
	complex(double x, double y) : re(x), im(y) {};
	~complex() { std::cout << "dtor" << std::endl; };

	complex& operator=(const complex& c) { //return type is required for chaining the asignment
		re = c.re;
		im = c.im;
		return *this; //this returns the same object
	}

	void print() {
		std::cout << "|" << re << "," << im << "|" << std::endl;
	}
};
int main() {
	complex a(4.3, 5.5), b(4.4, 5.8), c(1.1,3.3);
	a.print(); b.print();
	a = b; //copy assignment operator overloading 
	a.print();
  a = b = c; //first c get copied into b, the b gets copied into a as "=" is right associative. moreover b=c returns a complex& of |1.1,3.3| which further can be used by a = 
  a.print();
  b.print();
  c.print();
}