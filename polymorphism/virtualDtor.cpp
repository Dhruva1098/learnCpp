#include <iostream>

class A {
	int data_;
public:
	A(int d) :data_(d) { std::cout << "ctor:A" << std::endl; }
  virtual ~A() { std::cout << "dtor:A" << std::endl; }
	virtual void print() { std::cout << data_ << std::endl; }
};
class B :public A {
	int* ptr;
public:
	B(int a, int b) :A(a), ptr(new int(b)) { std::cout << "ctor: B" << std::endl; }
	void print() {
		A::print();
		std::cout << *ptr << std::endl;;
	}
	~B() { std::cout << "dtor B" << std::endl; delete ptr; }
};

int main() {
	A* p = new A(1); 
	A* q = new B(2,3);
	p->print();
	q->print();

	delete p;
	delete q; // here dtor of B will not be called if destructor of A isn't virtual because type of q is A and it will be statically bound
}