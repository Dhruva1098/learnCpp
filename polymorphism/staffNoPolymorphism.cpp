//director -> manager -> engineer
/*
PROS:
Datas is encapsulated
hierarchy is structured 
use of constructor/deconstructor
code reuse evdienced 
*/


#include <iostream>
#include <string>

enum E_TYPE {er, mgr, dir};
class engineer {
protected:
	std::string name; E_TYPE type;
public:
	engineer(const std::string& name, E_TYPE type = er) : name(name), type(type) {}
	void getSalary() {
		std::cout << name << ": process salary for engineer " << std::endl;
	}
	E_TYPE getType() {
		return type;
	}
};

class manager :public engineer {
public:
	manager(const std::string& name, E_TYPE type = mgr) : engineer(name, type) {}
	void getSalary() {
		std::cout << name << ": process salary for manager " << std::endl;
	}
};
class director :public manager {
public:
	director(const std::string& name, E_TYPE = dir) : manager(name, dir) {}
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
		E_TYPE t = employee[i]->getType();
		if (t == er) {
			employee[i]->getSalary();
		}
		else if (t == mgr) {
			((manager*)employee[i])->getSalary(); //down casting to invoke memFn of manager
		}
		else if (t == dir) {
			((director*)employee[i])->getSalary(); //down casting to invoke memFn of director
		}
		else std::cout << " invalid type" << std::endl;
	}
}

/* 
CONS:
types of objects are managed explicitly by E_TYPE
difficult to add to design because addition of new object requires:
	-addition to E_TYPE
	-new case of if else fn
error prone because programmer has to typecast to correct salary type
*/
//to solve this we will use polymorphic hierarchy type