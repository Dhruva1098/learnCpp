#include <vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int smaller = 0, equal = 0, larger = nums.size()-1;
        while(equal<=larger){
            if(nums[equal] < 1){
                swap(nums[smaller++],nums[equal++]);
            } else if (nums[equal]==1){
                ++equal;
            } else{
                swap(nums[equal],nums[larger--]);
            }
        }
    }
};