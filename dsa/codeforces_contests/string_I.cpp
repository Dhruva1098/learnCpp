#include <algorithm>
#include <iostream>
using namespace std;
int main(){
  string s;
  cin >> s;
  string t = s;
  reverse(s.begin(), s.end());
  if(!t.compare(s)) cout << "YES";
  else cout << "NO";
}
