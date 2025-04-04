#include <iostream>
#include <numeric>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    long long a,b;
    cin >> a >> b;
    if(b%a == 0){
      cout << b*b/a << "\n";
    }
    else {
      cout << b*a/gcd(a,b) << "\n";
    }
  }
}
