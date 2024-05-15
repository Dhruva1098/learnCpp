#include <iostream>
#include <string>

void stringPermuteHelper(std::string s, std::string chosen) {
	if (s == "") {
		std::cout << chosen << std::endl;
	}
	else {
		for (int i = 0; i < s.length(); i++) {
			//choose
			char c = s[i];
			chosen += c;
			s.erase(i, 1);
			//explore
			stringPermuteHelper(s, chosen);
			//unchoose
			chosen.erase(chosen.length() - 1, 1);
			s.insert(i, 1, c);
		}
	}
}

void stringPermute(std::string s){
	stringPermuteHelper(s, "");
}

int main() {
	stringPermute("dhruva");
}