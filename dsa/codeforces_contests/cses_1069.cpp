#include <iostream>
using namespace std;
int main(){
  string s;
  cin >> s;
  int n = s.length();
  int curr = 1;
  int max = 1;
  for(int i = 1; i < n; i++){
    if(s[i] == s[i-1])curr++;
    else if(s[i] != s[i-1]) curr = 1;
    if(curr>max)max=curr;
  }
  cout << max;

}
