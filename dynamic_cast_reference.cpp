#include <iostream>
// A <-- B,   C
class A { 
public : virtual ~A() {}; };

class B : public A {};

class C {
public: virtual ~C() {}; };

int main() {
	A a; B b; C c;
	try {
		B& rB1 = b;
		A& rA2 = dynamic_cast<A&>(rB1);
		std::cout << "valid upcast" << std::endl;

		A& rA3 = b;
		B &rB4 = dynamic_cast<B&>(rA3);
		std::cout << "valid Downcast" << std::endl;

		try {
			A& rA5 = a;
			B& rB6 = dynamic_cast<B&>(rA5);
		}
		catch (std::bad_cast e) { std::cout << "Down Cast: Invalid " << e.what() << std::endl; }
		try {
			A& rA7 = (A&)c;
			C& rC8 = dynamic_cast<C&>(rA7);
		}
		catch (std::bad_cast e) { std::cout << "Unrelated Cast: Invalid " << e.what() << std::endl; }
	}
	catch (std::bad_cast e) { std::cout << " Bad cast: " << e.what() << std::endl; }
}
