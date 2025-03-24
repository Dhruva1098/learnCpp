#include <iostream>
#include <vector>
using namespace std;

void match(string& a){
  string s1 = "101";
  string s2 = "010";
  int n = a.length();
    int pr = 0;
    int po = 0;
  for(int i = 0; i < n; i++){
    if(a[i] == s1[pr]){ pr++;}
    else if(a[i] != s1[pr]) pr = 0;
    if(a[i] == s2[po]) {po++;}
    else if(a[i] != s2[po]) po = 0;
    if(pr == 3 || po == 3){cout << "Good\n"; return;}
  } cout << "Bad\n";
}
int main(){
  int k;
  cin >> k;
  vector<string> out(k);
  for(int i = 0; i < k; i++){
    cin >> out[i];
    match(out[i]);
  }
}

