#include <iostream>
using namespace std;
typedef unsigned long long ull;

int reduce(int a){
  int out = 0;
  while(a){
    out += a%10;
    a/=10;
  } return out;
}

int main(){
  string n;
  cin >> n;
  if(n.length() == 1) {cout << 0; return 0;}
  int count = 0;
  int sum = 0;
  for (char c : n){
    sum += (c - '0');
  }
  if(sum) count+=1;
  while(sum > 9){
    count++;
    sum = reduce(sum);  } cout << count;
}

