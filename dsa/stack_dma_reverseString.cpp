#include <iostream>
class stack {
	char* data_; int top_;
public:
	stack() : data_(new char[10]), top_(-1) { std::cout << "stack() was called" << std::endl; } //constructor
	~stack() {
		delete[] data_;
		std::cout << "~stack() was called" << std::endl;
	} // deconstructor
	void empty() { top_ = -1; }
	void push(char c) { data_[++top_] = c; }
	char pop() { return data_[top_--]; }
};
int main() {
	stack c;
	char arr[] = "ABCDE";
	for (int i = 0; i < 5; i++) {
		c.push(arr[i]);
	}
	for (int i = 0; i < 5; i++) {
		char a = c.pop();
		std::cout << a;
	}
}