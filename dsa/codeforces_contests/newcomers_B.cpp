#include <iostream>
using namespace std;

int main() {
  string s;
  getline(cin, s, '\\');
  for(auto it : s){
    cout << it;
  }
}
