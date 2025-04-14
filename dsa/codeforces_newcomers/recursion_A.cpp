#include <iostream>
using namespace std;

void solve(int m){
  if(m == 0){ return;}
  else{ cout << "I love Recursion\n"; solve(m-1);
  }
}

int main(){
  int a;
  cin >> a;
  solve(a);
}
