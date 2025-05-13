#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int subarraySum(vector<int>&nums, int k){
  int n = nums.size();
  unordered_map<int, int> mp;
  int sum = 0;
  mp[0] = 0;
  int out = 0;
  for(int i = 0; i < n; i++){
    sum += nums[i];
    out += mp[sum-k];
    mp[sum] += 1;
  }
  return out;
}
int main(){
  vector<int> arr = {1,2,3};
  cout << subarraySum(arr,3);
}
