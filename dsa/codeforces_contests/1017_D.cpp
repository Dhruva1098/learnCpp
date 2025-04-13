#include <iostream>
#include <string>
int arr[200000];
int arrp[200000];
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    string p,s;
    cin >> p >> s;
    if(p[0] != s[0]){ cout << "no" << "\n"; continue;} 
    int pl = p.length();
    int sl = s.length();
    int j = 0; int count = 1;
    for(int i = 1; i < pl; i++){
      if(p[i] == p[i-1]) count ++;
      if(p[i] != p[i-1]){ arr[j++] = count; count = 1;}
    } arr[j] = count; count = 1; j = 0;
    for(int i = 1; i < sl; i++){
      if(s[i] == s[i-1]) count ++;
      if(s[i] != s[i-1]){ arrp[j++] = count; count = 1;}
    } arrp[j] = count;
    int k = 0; bool flag = true;
    while(arr[k]){
      if(2*arr[k] < arrp[k] || arr[k] > arrp[k] || p[arr[k] - 1] != s[arrp[k] - 1]) flag = false;
      k++;
    }
    if(flag) cout << "yes\n"; else cout << "no\n";
  }
}
