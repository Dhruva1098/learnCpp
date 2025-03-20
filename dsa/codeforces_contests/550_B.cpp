#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n,x;
  long long l,r;
  cin >> n >> l >> r >> x;
  vector<int> out(n,0);
  int count = 0;
  for(int i = 0; i < n; i++){
    cin >> out[i];
  }
  for(int i = 0; i < (1<<n); i++){
    long long sum = 0;
    long long min = 10e9;
    long long max = 0;
    for(int j = 0; (1<<j) <= i; j++){
      if(i&(1<<j)){
        sum+=out[j];
        if(out[j] > max){ max = out[j];}
        if(out[j] < min){ min = out[j];}
      }
    }
    if(sum >= l && sum <= r && max - min >= x){
      count++;
    }
  } cout << count;
}
