#include <iostream>

class printer {
	static int x; //defined inside the class
	int y;
public:
	void get() { x = 10; y = 10; }
	void set() { x += 10; y += 10; }
	void print() { std::cout << "x = " << x << ", y = " << y << std::endl; }
};
int printer::x = 0; //declared outside the class
int main() {
	printer a, b;
	a.get(); b.get();
	a.set(); b.set();
	a.print(); b.print(); // here x = 30 and y = 20 because x is golbal and two set calls increase its vales by 20 
}