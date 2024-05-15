#include <iostream>
#include <vector>

void diceRollHelper(int dice, std::vector<int>& chosen) {
	if (dice == 0) {
		std::cout << "{";
		for (int i : chosen) {
			std::cout << i << ",";
		}
		std::cout << "}" << std::endl;
	}
	else {
		for (int i = 1; i <= 6; i++) {

			//since we are doing this by backtracking, we will follow the methodology
			//choose one path
			chosen.push_back(i);
			//explore
			diceRollHelper(dice - 1, chosen);
			//un-choose the path
			chosen.pop_back();
		}
	}
}
//a helper function is a technique we use when we have to pass more parameters to a function then our code allows for us to
void diceRoll(int dice) {
	std::vector<int> chosen;
	diceRollHelper(dice, chosen);
}

int main() {
	diceRoll(3);
}



