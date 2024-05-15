#include <iostream>

class V3 {
	double x, y, z;
public:
	V3(double a, double b, double c) {
		x = a; y = b; z = c;
	}
	V3 operator*(double f) {
		return V3(x * f, y * f, z * f);
	}
	V3 operator+(V3 b) {
		return V3(x + b.x, y + b.y, z + b.z);
	}
	void print() {
		std::cout << x << " " << y << " " << z << std::endl;
	}
};
int main() {
	V3 s(0, 0, 0), u(0, 0, 0), a(1, 1, 1);
	double t = 10;
	s = u * t + a * t * t * 0.5;
	s.print();
}
//classes are just structures with default as private (structures have default as public)