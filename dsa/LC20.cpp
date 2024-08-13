#include <string>
#include <stack>
#include <iostream>
using namespace std;

bool isValid(string s) {
    stack<char> stack;
    stack.push((int)s[0]);
    for(int i = 1; i < s.length(); i++) {
        if(stack.empty()) {stack.push(s[i]);}
        char out = s[i];
        char top = stack.top();
        if((top == out - 1) || (top == out - 2)) {stack.pop();}
        else stack.push(s[i]);
    }
    if(stack.empty()) return true;
    return false;
}
int main(){
    string s = "({})";
    cout << isValid(s);
}