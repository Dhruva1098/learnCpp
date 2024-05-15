#include <iostream>

class A { public:
	void f() { std::cout << "A::f()" << std::endl; }
	virtual void q() { std::cout << "A::q()" << std::endl; }
};

class B:public A { public:
	void f(){std::cout<<"B::f()"<< std::endl; }
	virtual void q() { std::cout << "B::q()"<< std::endl; } //virtual keyword tells the compiler to resolve this at runtime 
};

int main() {
	A a; B b;
	A* p;
	p = &a;
	p->f();
	p->q();
	p = &b;
	p->f(); // will call A::f() because it is static binding and determined by the type of pointer p is
	p->q(); // will call B::q() because it is dynamuc binding and determined by the type of object pointer p is pointing to 
}