#include <iostream>

using namespace std;

int main(){
  string s;
  int k;
  cin >> k;
  cin >> s;
  int out = 0;
  for(char a : s) out+= a - '0';
  cout << out;
}
