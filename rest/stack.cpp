//creates a static stack of characters of 100 members
#include <iostream>

class stack {
private:
	char arr[100];
	int top;
public:
	stack() { //constructor
		top = -1;
	}
	bool isEmpty() {
		if (top == -1) {
			return true;
		}
		else return false;
	}
	bool isFull() {
		if (top == 99) {
			return true;
		}
		else return false;
	}
public:
	void push(char c) {
		if (isFull()) { std::cout << "stak is full" << std::endl; }
		else { arr[++top] = c; }
	}
	char pop() {
		if (isEmpty()) { std::cout << "stack is empty" << std::endl; }
		else { return arr[top--]; }
	}
	void printStack() {
		if (isEmpty()) { std::cout << "stack is empty" << std::endl; }
		else {
			std::cout << "[";
			for (int i = 0; i = top; i++) {
				std::cout << i << ",";
			}
			std::cout << "]";
		}
		
	}
};
int main() {
	stack stack;
	stack.push('a');
	std::cout << stack.pop();
}