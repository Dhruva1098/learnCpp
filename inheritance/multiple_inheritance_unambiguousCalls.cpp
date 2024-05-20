#include <iostream>
#include <string>
class Base1 { 
protected:
	int i_, data_;
public:
	Base1(int a, int b) :i_(a), data_(b) {}
	void f(int) { std::cout << "Base1::f(int) \n"; }
	void g() { std::cout << "Base1::g() \n"; }
};
class Base2 {
protected:
	int j_, data_;
public:
	Base2(int a, int b) : j_(a), data_(b) {}
	void f(int) { std::cout << "Base2::h(int) \n"; }
	void g() { std::cout << "Base2::g() \n"; }
};
class Derived : public Base1, public Base2 {
	int k_;
public:
	Derived(int x, int y, int u, int v, int z) :Base1(x, y), Base2(u, v), k_(z) {}
	using Base1::f; //this resolves issues arising from functions with same names in base classes
	using Base2::g;
};

int main() {
	Derived c(1, 2, 3, 4, 5);
	c.f(5); 
	c.g();
	c.Base2::f(3); //can still be called
	c.Base1::g();
}