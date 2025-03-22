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
    string rev = s;
    int len = s.length();
    int count = 0;
    reverse(rev.begin(), rev.end());
    if(!s.compare(rev)) {cout << "1 NO\n"; break;}
    for(int a = 0; a < len; a++){
      if(s[a] >= rev[a]){
        int temp = a;
        while(s[temp] > rev[a] && temp < len){
          temp++;
        } 
        if(temp < len) {char tp = s[a]; s[a] = s[temp]; s[temp] = tp; count++;}
        else { cout << "2 NO" << "\n"; break;}
      }
    } 
    if(s.compare(rev) || count > k) {cout << "3 NO\n"; continue;}
    else if(count <= k) cout << "YES\n";
  }
}
