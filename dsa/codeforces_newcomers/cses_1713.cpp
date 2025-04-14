#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;


int solve(int x){
  int j = sqrt(x);
  int count = 0;
  for(int i = 1; i <= j; i++){
    if(x%i == 0){
      if(x/i != i) count+=2;
      else count += 1;
    }
  }
  return count;
}
int main(){
  int a;
  cin >> a;
  while(a--){
    int x;
    cin >> x;
    cout << "\n" << solve(x);
  }
}
