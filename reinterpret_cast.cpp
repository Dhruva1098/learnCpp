#include <iostream>

class A {};
class B {};

int main() {
	long i = 2; double d = 1.2;
	double* pd = &d;

//  i = pd; implicit ERROR
	i = reinterpret_cast<long>(pd);  //explicit allowed
	i = (long)pd; //SHOULD NOT BE USED -- ALLOWED
	std::cout << pd << " " << i << std::endl;

	A *pa;
	B b; B *pb;
	pb = &b;
//  pa = pb; implicit ERROR unrelated classes
	pa = reinterpret_cast<A*>(pb); //allowed
	pa = (A*)pb; // c style DO NOT USE
}
