#include <iostream>

namespace myNamespace { //like class and struct
	int data;
	void function() { std::cout << "my namespace function" << std::endl; }
	class myClass {
		int classData;
	public:
		myClass(int data):classData(data){}
		void classFunction() { std::cout << "my class function" << std::endl; }
	};
  namespace innerNamespace{
    int data = 3;
  }
}
int main() {
	myNamespace::data = 15;
	myNamespace::function();
	myNamespace::myClass obj(12);
	obj.classFunction();
  std::cout<<myNamespace::innerNamespace::data; //nested namespacing
}