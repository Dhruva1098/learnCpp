#include <cmath>
#include <iostream>
#include <numeric>

using namespace std;

int main(){
  int n;
  cin >> n;
  long long g = 0;
  for(int i = 0; i < n; i++){
    long long x;
    cin >> x;
    g = gcd(g,x);
  }
  int ans = 0;
  int t = sqrt(g);
  for(int i = 1; i <= t; i++){
    if(g%i == 0){
      ans++;
      if(i != g/i) ans++;
    }
  }
  cout << ans;
 
}
