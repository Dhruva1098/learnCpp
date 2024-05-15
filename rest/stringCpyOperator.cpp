#include <iostream>
#include <cstring>
#include <cstdlib>


class String {
public:
	char* str; size_t length;
	String(const char s[]) : str(_strdup(s)), length(strlen(s)) {};
	String(const String& s) : str(_strdup(s.str)), length(s.length) {};
	String& operator=(const String& s) {
		if (this != &s) {
			free(str);
			str = s.str;
			length = s.length;
		}
		return *this;
	}
	void print() {
		std::cout << "(" << str << ": len = " << length << ")" << std::endl;
	}
};
int main() {
	String A = "football", B = "cricket", C = "hockey";
	A = B = C;
  A = A;
	A.print();
}