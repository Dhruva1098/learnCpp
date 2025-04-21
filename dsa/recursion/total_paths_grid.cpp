#include <iostream>

int solve(int a, int b){
  int out;
  if(a == 1 || b == 1) return 1;
  out = solve(a-1,b) + solve(a,b-1);
  return out;
}
using namespace std;
int main(){
  int a,b;
  cin >> a >> b;
  cout << solve(a,b);
}
