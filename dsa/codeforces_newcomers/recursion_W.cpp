#include <iostream>
using namespace std;

bool solve(long long a){
  if(a == 1) return true;
  if(a<1) return false;
  if ( a % 10 == 0 && solve(a/10)) return true;
  if(a%20 == 0 && solve(a/20)) return true;
  return false;
}

int main(){
  int a;
  cin >> a;
  while(a--){
    long long b;
    cin >> b;
    if(solve(b)) cout << "YES\n";
    else cout << "NO\n";
  }
}
