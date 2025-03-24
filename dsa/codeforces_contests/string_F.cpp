#include <iostream>
#include <vector>
using namespace std;
int main(){
  int t;
  cin >> t;
  vector<string> out(t);
  for(int i = 0; i < t; i++){
    cin >> out[i];
    int n = out[i].length();
    if(n > 10){ cout << out[i][0] << n - 2 << out[i][n - 1] << "\n";}
    else cout << out[i] << "\n"; 
  }
}
