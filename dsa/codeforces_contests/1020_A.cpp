#include <iostream>
#include <string>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int z = 0; int o = 0;
    long long out = 0;
    string s;
    cin >> s;
    for(auto i : s){
      if(i == '1') o++;
      else z++;
    }
    out = o*(n-1) + z;
    cout << out << "\n";
  }
}
