#include <vector>
using namespace std;
class Solution {
public:

    bool search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (target == nums[mid]) return true;
            if(nums[mid] == nums[low] && nums[mid] == nums[high]) {
                low++;
                high--;
                continue;
            }
            if (nums[low] <= nums[mid]) {
                if(target >= nums[low] && target <= nums[mid]) {
                    high = mid - 1;
                } else { 
                    low = mid + 1;
                }}
            else{
                 if (nums[high] >= target && target >= nums[mid]) {
                     low = mid + 1;
                 } else {
                     high = mid - 1;
                 }
            }
    } return false;}
};