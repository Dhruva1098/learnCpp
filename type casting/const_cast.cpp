#include <iostream>

class A {
	int a_;
public:
	A(int a) : a_(a) {};
	int get() const { return a_; }
	void set(int a) { a_ = a; }
};
void print(char* str) { std::cout << str << std::endl; }

int main() {
	const char* str = "hello world";
	//print(str);     this will give an error as it expects a "char*" but we provide a "const char*"
	print(const_cast<char*>(str)); //this will however work as const_cast casts 

	const A a(1);
	a.get();  //no error because get is a const function

	
	// a.set(6)      throws an error because set cannot convert a this pointer of "const A" to "A&"
	const_cast<A&>(a).set(6); //works
	// const_cast<A>(a).set(6);     also throws an error because const_cast cannot convert "const A" to "A"
}