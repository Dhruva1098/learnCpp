#include <iostream>
#include <vector>
using namespace std;

void solve(vector<long long>& out, int n){
  if(n >= 0 && n%2 == 0){ 
    cout << out[n] << " ";
    solve(out,n-2);
  } else if (n > 0) {
    solve(out,n-1);
  }
}


int main(){
  int a;
  cin >> a;
  vector<long long> out(a);
  for(int i = 0;i<a;i++){
    cin >> out[i];
  }
  solve(out,a-1);
}
