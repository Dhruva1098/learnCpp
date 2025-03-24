#include <cstring>
#include <iostream>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int n = s.length();
    bool flag = false;
    for(int i = 1; i < n; i++){
      if(s[i]!=s[i-1]) flag = true;
    }
    
  }
}
