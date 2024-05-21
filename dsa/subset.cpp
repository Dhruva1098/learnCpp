#include<vector>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;
class Solution {
public:
    vector<string> binaries = {};
    vector<vector<int>> subsets(vector<int>& nums) {
        BinaryCombinations(nums.size(), "");
        vector<vector<int>> sol = {};
        
        for(auto i:binaries){
          vector<int> subset = {};
          for(int k = 0; k < i.size(); k++){
            if(i[k]=='1'){
              subset.push_back(nums[k]);
            }
          }
          sol.push_back(subset);
        }
        return sol;
    }
    vector<string> BinaryCombinations(int size, string prefix) {
      
	    if (size == 0) {
		    binaries.push_back(prefix);
	    }
	    else {
        BinaryCombinations(size - 1, prefix + "0");
        BinaryCombinations(size - 1, prefix + "1");
	    }
      return binaries;
    }
};
int main(){
  Solution s;
  vector<int> nums = {1,2,3};
  vector<vector<int>> b = s.subsets(nums); 
}