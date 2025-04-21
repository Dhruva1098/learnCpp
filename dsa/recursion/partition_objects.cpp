#include <iostream>
using namespace std;

int solve(int m, int n){
  if(n == 0) return 1;
  if(m == 0 or n < 0) return 0;
  return solve(m-1,n) + solve(m,n-m);
}

int main(){
  int a,b;
  cin >> a >> b;
  cout << solve(a,b);
}
