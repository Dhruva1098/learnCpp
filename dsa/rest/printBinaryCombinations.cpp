#include <iostream>
#include <string>

void printBinaryCombinations(int size, std::string prefix) {
	if (size == 0) {
		std::cout << prefix << std::endl;
	}
	else {
		printBinaryCombinations(size - 1, prefix + "0");
		printBinaryCombinations(size - 1, prefix + "1");
	}
}

int main() {
	printBinaryCombinations(7, "");
}