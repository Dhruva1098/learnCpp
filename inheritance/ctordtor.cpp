#include <iostream>


class B {
public:
	int data;
	B(int d = 0) : data(d) { std::cout << "ctor B called" << std::endl; }
	~B() { std::cout << "Dtor B" << std::endl; }
};

class D:public B {
public:
	int info;
	D(int d, int i) :B(d),info(i) { std::cout << "override ctor of D called" << std::endl; }
	D(int i) : info(i) { std::cout << "D called without B" << std::endl; }
	~D() { std::cout << "Dtor D" << std::endl; }
};

int main() {
	B b(4);
	D d(1, 2);
	D e(1);
}
