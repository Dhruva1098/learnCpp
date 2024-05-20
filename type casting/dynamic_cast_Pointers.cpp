#include <iostream>
// A <-- B,   C
class A { 
public : virtual ~A() {}; };

class B : public A {};

class C {
public: virtual ~C() {}; };

int main() {
	A a; B b; C c;
	B* pB = &b;
	A* pA = dynamic_cast<A*>(pB);  //upcasts are always valid
	std::cout << pB << " casts to " << pA << ": Upcast: Valid " << std::endl;
	pA = &b; pB = dynamic_cast<B*>(pA); // pB expects a B type object and pA holds a B type object : valid
	std::cout << pA << " casts to " << pB << ": Downcast Valid " << std::endl;
	pA = &a; pB = dynamic_cast<B*>(pA); //pB expects a B type object but gets an A type object which is an invalid downcast
	std::cout << pA << " casts to " << pB << ": Downcast Invalid " << std::endl; //dynamic_cast returns a null pointer
	pA = (A*)&c; C *pC = dynamic_cast<C*>(pA); //invalid, unrelated classes
	std::cout << pA << " casts to " << pC << ": Unrelated cast Invalid " << std::endl;
	pA = 0; pC = dynamic_cast<C*>(pA); //pA is null
	std::cout << pA << " casts to " << pC << ": unrelated cast Valid for NULL " << std::endl;
	
	pA = &a; void* pV = dynamic_cast<void*>(pA);
	//pA = dynamic_cast<A*>pV; //ERROR : void * is invalid expression type for dynamic cast
}
