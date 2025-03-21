#include <iostream>
#include <vector>
using namespace std;

int main(){
  int N,W;
  cin >> N >> W;
  vector<int>knap(N,0);
  vector<int>weights(N,0);
  for(int i = 0; i < N; i++){
    cin >> knap[i] >> weights[i];
  }
  int max = 0;
  for(int i = 0; i < (1<<N); i++){
    int weight = 0;
    int items = 0;
    for(int j = 0; j <= 30; j++){
      if(i&(1<<j)){
        weight+=weights[j];
        items += knap[j];
      }
    }
    if(items <= W && weight>=max) max = weight;
  } cout << max;
}
