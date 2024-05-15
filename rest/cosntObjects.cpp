#include <iostream>

class myClass {
	int myPvtMember;
public:
	int myPubMember;
	myClass() : myPvtMember(1), myPubMember(1) {}
	myClass(int mPvt, int mPub) : myPvtMember(mPvt), myPubMember(mPub) {}
	~myClass() { std::cout << "Dtor" << std::endl; }

	void print() const { //this taks a const this poiner as input now
		std::cout << "(" << myPvtMember << "," << myPubMember << ")" << std::endl;
	}
	void set(int pub) {
		myPubMember = pub;
	}
};

int main() {
	const myClass a(4, 5);
	myClass b;
	a.print();//works because of the "const" in the function defination
	b.print();//works because this pointrer gets typecated into const this pointer
	b.set(2);//works
	b.print();
	//a.set(2) will throw an error
}