#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int longestConsecutive(vector<int>& nums){
  int n = nums.size();
  if(n==0) return 0;
  unordered_set<int> st;
  for(int i = 0; i < n; i++){
    st.insert(nums[i]);
  }
  int longest = 1; 
  for(auto it: st){
    if(st.find(it - 1) == st.end()) {
      int cnt = 1;
      int x = it;
      while(st.find(x + 1) != st.end()) {
        x++;
        cnt++;
      }
      longest = longest>cnt?longest:cnt;
    }
  }
  return longest;
}
int main(){
  vector<int> arr = {0,3,7,2,5,8,4,6,0,1};
  cout << longestConsecutive(arr); 
}
