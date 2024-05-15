#include <iostream>

class A {
	int a;
	int* p_;
public:
	A(int i, int j) : a(i), p_(new int(j)) {};
	~A() {
		std::cout << "i = " << a << std::endl << "p_ = " << p_ << std::endl << "*p_ = " << *p_ << std::endl << "&p_ = " << &p_ << std::endl;;
		delete p_;
	}
};
int main() {
	A obj(10, 20);
	A cpy(obj); // this is shallow copy, as p_ is pointing to same address in both obj and cpy (both p_ are same pointer)
	//now since dtor of obj is called first, for cpy, *p_ holds a garbage value
}