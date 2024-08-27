#include <iostream>
#include<vector>
using namespace std;
int calc_score(int i, int j, int min){
  return min*(j-i+1);
}
int maximumScore(vector<int>& nums, int k){
  int i, j, min = nums[k], n = nums.size(), score = nums[k];
  min = nums[k];
  int marr[nums.size()];
  for(i = k; i > -1; i--){
    if(nums[i] <= min) { min = nums[i];}
      marr[i] = min;
    } min = nums[k];
  for(i = k; i < n; i++){
    if(nums[i] <= min) { min = nums[i];}
      marr[i] = min;
    } min = nums[k];
  i = 0;j = n-1;
  while(i <= k && j >= k){
    if( marr[i] < marr[j]) {
      if(score < calc_score(i, j, marr[i])) score = calc_score(i,j,marr[i]); i++;  
    }
    if(marr[i] >= marr[j]){
      if(score < calc_score(i,j, marr[j])) score = calc_score(i,j,marr[j]); j--;
    }
  }
  return score;
}

int main(){
  vector<int> nums = {5,5,4,5,4,1,1,1};
  std::cout << " \n " << maximumScore(nums, 0);
}
