//director->manager->engneer->Employee(ABC)<-salesTeam


#include <iostream>
#include <string>
#include <vector>

class Employee { //Abstract base class
protected:
	std::string name_;
public:
	static std::vector<Employee*> staff; //collection of staff instead of maintaining an array
	virtual void getSalary() = 0; //processing salary 
	virtual ~Employee() {}
	void addStaff(Employee* e) { staff.push_back(e); } //adding to collection

};
class Engineer : public Employee { 
public:
	Engineer(const std::string& name) {
		name_ = name; //init like name_(name) will not work because it is not initiated in this class
		addStaff(this);
	}
	void getSalary() {
		std::cout << name_ << ": process salary for engineer" << std::endl;
	}
};
class Manager : public Engineer {
public:
	Manager(const std::string& name) :Engineer(name) {}
	void getSalary() {
		std::cout << name_ << ": process salary for Manager" << std::endl;
	}
};
class Director :public Manager {
public:
	Director(const std::string& name) :Manager(name) {}
	void getSalary() {
		std::cout << name_ << ": process salary for Director" << std::endl;
	}
};

class SalesTeam :public Employee {
public:
	SalesTeam(const std::string& name) {
		name_ = name;
		addStaff(this);
	}
	void getSalary() {
		std::cout << name_ << ": process salary for Sales team" << std::endl;
	}
};

std::vector<Employee*> Employee::staff; //collection of staff needed to define in global space because it is static

int main() {
	Engineer e1("raj"), e2("mukesh"), e3("ramesh"), e4("krishna");
	Manager m1("johnson"), m2("danica");
	Director d1("steve");
	SalesTeam s1("pearson"), s2("havel");

	std::vector<Employee*>::const_iterator it;
	for (it = Employee::staff.begin(); it < Employee::staff.end(); it++) {
		(*it)->getSalary();
	}
}
