#include <iostream>
#include <typeinfo>
// A <-- B
class A { 
public : virtual ~A() {}; };
class B : public A {};

int main() {
	A a; B b; 
	std::cout << typeid(a).name() << ":" << typeid(&a).name() << std::endl; //static
	A* pA = &a; 
	std::cout << typeid(pA).name() << ":" << typeid(*pA).name() << std::endl; //dynamic

	std::cout << typeid(b).name() << ":" << typeid(&b).name() << std::endl; //static
	pA = &b; //implicit
	std::cout << typeid(pA).name() << ":" << typeid(*pA).name() << std::endl; //dynamic

	A& rA1 = a;
	A& rA2 = b;
	std::cout << typeid(rA1).name() << ":" << typeid(rA2).name() << std::endl; //dynamic
}
