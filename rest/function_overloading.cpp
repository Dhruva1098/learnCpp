#include <iostream>
//function overloadig allowes for multiple functions to have same name, and are distinguished by the data types they take as local parameters
int mul(int a, int b) {
	return a * b;
}
double mul(double a, double b) {
	return a * b;
}
int area(int a, int b) { return a * b; }
int area(int a) { return a * a; }
//double area(int a) //this function cannot be overloaded because it has same signature as the function above
int main() {
	int a = 10, b = 20;
	double c = 10.5, d = 25.55;
	std::cout << mul(a, b) << std::endl;//first function is called because data types are int
	std::cout << mul(c, d) << std::endl;//second function is called because data types are double
	std::cout << area(a) << std::endl;//second area is called
	std::cout << area(a,b) << std::endl; // first area is called
}