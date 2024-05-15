#include <iostream>
#include <cmath>
#include <math.h>

struct V3 {
	double x, y, z;
	V3(double a, double b, double c) { // this is a constructor, it is called when the instance of struct is created with valid parameters
		x = a; y = b; z = c;
	}
	V3() {} // this is also another default constructor. it is called when struct is created without any parameters 
	V3 operator+(V3 b) {
		return V3(x + b.x, y + b.y, z + b.z);
	}
	V3 operator*(double f) {
		return V3(x * f, y * f, z * f);
	}
  V3 operator*(V3 b){ // dot product of two vectors
    return V3(x*b.x, y*b.y, z*b.z);
  }
};
int main() {
	V3 u(0, 0, 0), a(1, 1, 1), s(0,0,0);//here firts constructor is called
	double t = 10;
	s = u * t + a * t * t * 0.5; //this is operator overloading. here u*t is equivalent to u.operator*(t) which we already have defined
	std::cout << s.x << " " << s.y << " " << s.z << std::endl;
}