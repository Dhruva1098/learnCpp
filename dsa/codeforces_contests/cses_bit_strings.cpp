#include <iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  long long out = 1 << n;
  long long mod = 10e9+7;
  cout << out % mod;
}
