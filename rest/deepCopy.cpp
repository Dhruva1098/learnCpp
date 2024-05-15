#include <iostream>

class A {
	int a;
	int* p_;
public:
	A(int i, int j) : a(i), p_(new int(j)) {};
	A(const A& obj) : a(obj.a), p_(new int (*obj.p_)) {};
	~A() {
		std::cout << "i = " << a << std::endl << "p_ = " << p_ << std::endl << "*p_ = " << *p_ << std::endl << "&p_ = " << &p_ << std::endl;;
		delete p_;
	}
};
int main() {
	A obj(10, 20);
	A cpy(obj); // this is dep copy, as a new p_ is created and points to a newly created copy of i as well
	//now even if dtor is called for obj, cpy has a new value which it is pointing to which is not deleted
}