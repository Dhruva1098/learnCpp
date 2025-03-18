#include <iostream>
using namespace std;
int main(){
  int k,s;
  cin >> k >> s;
  int count = 0;
  for(int i = 0; i <= k; i++){
    int sum = s-i;
    int l = k;
    for(int j = 0; j <= l;){      
      if(sum > 2*k) break;
      else if(sum == 2*k){count++; break;}
      else{
        if((j+l == sum)&&(j != l)) {count+=2;j++; }
        else if((j+l == sum)&&(j == l)) {count += 1;j++;}
        else if(j+l > sum) l--;
        else if(j+l < sum) j++;
      }
    }  
    } cout << count;
  }
