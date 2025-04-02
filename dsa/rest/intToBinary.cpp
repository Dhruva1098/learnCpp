#include <iostream>

void toBinary(int num) {
  if(num<0){
    std::cout<<"-";
    toBinary(-num);
  } else if (num<2) {
		//base case
		std::cout << num;
	} else {
		//recursive case
		//get last digit for binary and rest of digits.
		int lastDigit = num % 2;
		int restDigits = num / 2;
		toBinary(restDigits);
		std::cout << lastDigit;
	}
}
int main() {
	int num = 43;
	toBinary(num);
}
