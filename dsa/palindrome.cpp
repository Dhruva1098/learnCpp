// Learn.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cctype>

std::string toLowerCase(std::string s1) {
    std::string out = "";
    for (char ch : s1) {
        out += tolower(ch);
    }
    return out;
}
bool isPalindrome(std::string s1) {
    s1 = toLowerCase(s1);
    //base case
    if (s1.length() == 1) return true;
    //recursive case
    else {
        char first = s1[0];
        char last = s1[s1.length() - 1];
        std::string middle = s1.substr(1, s1.length() - 2);
        if (first == last) {
            return isPalindrome(middle); //recursive call
        }
        else {
            return false;
        }
    }
}

int main()
{
    std::string s1 = "Racecar";
    if (isPalindrome(s1) == true) std::cout << "true";
    else std::cout << "false";
}

