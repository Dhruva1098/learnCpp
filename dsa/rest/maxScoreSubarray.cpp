#include <climits>
#include <iostream>
#include <vector>

using namespace std;


int pairWithMaxSum(vector<int>& arr){
  int n = arr.size();
  if(n==2) return arr[0]+arr[1];
  int out = arr[0]+arr[1];
  int csum = out;
  for(int i = 2; i < n; i++){
    csum += arr[i]; csum-=arr[i-2];
    if(csum>out)out=csum;
  }
  return out;
}

int main(){
  vector<int> arr = {4,3,1,5,6};
  cout << pairWithMaxSum(arr);
}
