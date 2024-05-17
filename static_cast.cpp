#include <iostream>

class A{};
class B : public A {};
// A <- B

int main() {
	int i = 0; double d = 3.7; long j; int* pi = &i; double* pd = &d; void* pv;

	i = d; //implicit type casting allowed with WARNING
	i = static_cast<int>(d); //c++ style
	i = (int)d; //c style cast

	d = i; //implicit okay
	d = static_cast<double>(i); //static cast okay
	d = (double)i; //c style okay

	pv = pi; //implicit okay
//  pi = pv; implicit ERROR
	pi = static_cast<int*>(pi);//explicit cast okay
	pi = (int*)pv; //c style

//	j = pd; implicit ERROR 
//  j = static_cast<long>pd //explicit ERROR
	j = (long)pd; //c style --OKAY because sizeof(long) == 8 == sizeof(double*)
				  // RISKY HOWEVER - use reinterpret_cast
//	j = (int)pd; //c style --ERORR because sizeof(int) == 4 != 8 == sizeof(double*)
	
	A a; B b;

	//UPCAST
	A* pa = 0;
	pa = &b; //implicit upcast okay
	pa = static_cast<A*>(&b); //static cast okay
	pa = (A*)&b; //c style okay

	//DOWNCAST
	B* pb = 0;
//  pb = &a; //implicit downcast ERROR
	pb = static_cast<B*>(&a); //static_cast okay RISKY: should use dynamic_cast
	pb = (B*)&a; //c style okay
}