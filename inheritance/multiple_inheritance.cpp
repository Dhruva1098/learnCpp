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
	void h(int) { std::cout << "Base2::h(int) \n"; }
};
class Derived : public Base1, public Base2 {
	int k_;
public:
	Derived(int x, int y, int u, int v, int z) :Base1(x, y), Base2(u, v), k_(z) {}
	void f(int) { std::cout << "Derived::f(int) \n"; } //overridden 
	//inherited Base1::g()
	void h(std::string) { std::cout << "Derived::h(string) \n"; } //overloaded
	void e(char) { std::cout << "Derived::e(char) \n"; } //added
};

int main() {
	Derived c(1, 2, 3, 4, 5);
	c.f(5); 
	c.g();
	c.h("hellp");
	c.e('a');
}