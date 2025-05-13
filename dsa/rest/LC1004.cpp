#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int longestOnes(vector<int>&nums, int k){
  int n=nums.size();
  int l = 0; int r = 0;
  int m = 0;
  int z = 0;;
  while(r<n){
    if(nums[r] == 0){
      z++;
    } 
    if(z > k){
      if(nums[l] == 0) {
        z--;
      }
      l++;
    }
    m = max(m,r-l+1);
    r++;
  } return m;
  
}

int main(){
  vector<int> arr = {1,1,1,0,0,0,1,1,1,1,0};
  cout << longestOnes(arr,2);
}
