//director -> manager -> engineer
/*
PROS:
polymorphic hierarchy is used
easier to add new classes now
maximum code reuse
*/


#include <iostream>
#include <string>

class engineer {
protected:
	std::string name;
public:
	engineer(const std::string& name) : name(name){}
	virtual void getSalary() {
		std::cout << name << ": process salary for engineer " << std::endl;
	}
};

class manager :public engineer {
public:
	manager(const std::string& name) : engineer(name) {}
	void getSalary() {
		std::cout << name << ": process salary for manager " << std::endl;
	}
};
class director :public manager {
public:
	director(const std::string& name) : manager(name) {}
	void getSalary() {
		std::cout << name << ": process salary for director " << std::endl;
	}
 };

int main() {
	engineer e1("raj"), e2("mukesh"), e3("anil");
	manager m1("sunil"), m2("ramesh");
	director d1("johnson");
	engineer* employee[] = { &e1, &e2, &e3, &d1, &m1, &m2 }; //allowed downcast

	for (int i = 0; i < sizeof(employee) / sizeof(engineer*); i++) {
		employee[i]->getSalary();
	}
}
 /*
 CONS:
 adding a new class which is not a part of engnineer is tough (eg. adding new sales person which is employee but not engineer)
 we still need to maintain an array employee which is error prone
 */
