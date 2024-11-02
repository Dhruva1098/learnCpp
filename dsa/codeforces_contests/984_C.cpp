#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
  int t;
  cin >> t;
  for(int l = 0; l < t; l++){
    string s;
    string one = "1100";
    cin >> s;
    int q;
    cin >> q;
    for(int j = 0; j < q; j++){
      int i,v;
      cin >> i >> v;
      i--;
      s[i] = '0' + v;
      if(strstr(s.c_str(), one.c_str())) cout << "YES\n";
      else cout << "NO\n";
    }
  }
}

