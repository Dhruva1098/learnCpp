#include <iostream>

class Base {
public: //for simplicity
	void fn1() { std::cout << "Base fn1" << std::endl; }
	void fn2() { std::cout << "Base fn2" << std::endl; }
};

class Derived : public Base { //inheritance
	//inherits fn1 and fn2
public:
	void fn1(int i) { std::cout << "Derived overload " << std::endl; }
	void fn1() { std::cout << "Derived override fn1" << std::endl; }
	void fn3() { std::cout << "derived fn3" << std::endl; }
};

int main() {
	Base b;
	Derived d;
	b.fn1(); //base fn1
	d.fn1(); //derived overload
	d.fn1(2); //derived override fn1
	d.fn3();
}
