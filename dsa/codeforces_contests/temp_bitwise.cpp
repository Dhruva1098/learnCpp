#include <iostream>
#include <vector>

using namespace std;

int main(){
  int k,s;
  cin >> k >> s;
  vector<int> temp(k,0);
  for(int i = 0; i < k; i++){
    cin >> temp[i];
  }
 
  for(int i = 0; i < (1<<k); i++){
    int sum = 0;
    for(int j = 0; (1<<j) <= i; j++){
      if(i&(1<<j)){
        sum+=temp[j];
      }
    }
    if(sum == s){
      cout << 1; return 0;
    }
  } cout << 0;
  
}
