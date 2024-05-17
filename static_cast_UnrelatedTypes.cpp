#include <iostream>

class B;
class A {
	int i_;
public: 
	A(int i = 0): i_(i) { std::cout << "A::A((i)\n"; }
	A(const B&) { std::cout << "A::A(B&)\n"; }
	//this is very useful when we do not have access to the code of target type
	operator int() { std::cout << "operator int() \n"; return i_; } // for conversion of A to int
};
class B {};

int main() {
	A a; B b;
	int i = 5;

	//B ==> A
	a = b; //implicit OKAY now because we have a constructor which takes B clsss object
	a = static_cast<A>(b); // okay now
	a = (A)b; 

	// int ==> a
	a = i; //implicit because we have a constructor
	a = static_cast<A>(i); 
	a = (A)i;

	// a ==> int
	i = a; //implicit
	i = static_cast<int>(a);
	i = (int)a;
}