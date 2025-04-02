#include<vector>
#include <string>
using namespace std;
std::vector<int> nums1 = {};
class Solution {
public:
    vector<vector<int>> sol = {};
    vector<vector<int>> subsets(vector<int>& nums) {
      nums1 = nums;
      return BinaryCombinations(nums.size(), "");
    }
    vector<vector<int>> BinaryCombinations(int size, string prefix) {
	    
      if (size == 0) {
		    vector<int> subset = {};
          for(int k = 0; k < prefix.size(); k++){
            if(prefix[k]=='1'){
              subset.push_back(nums1[k]);
            }
          }
          sol.push_back(subset);
	    }
	    else {
        BinaryCombinations(size - 1, prefix + "0");
        BinaryCombinations(size - 1, prefix + "1");
	    }
      return sol;
    }
};
int main(){
  Solution s;
  vector<int> nums = {1,2,3};
  vector<vector<int>> b = s.subsets(nums); 
}
