#include <iostream>
#include <fstream>
#include <string>

void reverseFile(std::ifstream& input) {
	std::string line;
	//if is true until there is a line, at last line if is false and function calls start finishing 
	if(getline(input,line)){
		//base case
		reverseFile(input);
		std::cout << line << std::endl;
	}
}
int main() {
	std::ifstream input;
	input.open("C:/Users/dhruv/Desktop/base.txt");
	reverseFile(input);
}