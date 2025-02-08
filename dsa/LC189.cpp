#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>n){
        while(k){
            std::rotate(nums.rbegin(), nums.rbegin() + 1, nums.rend());
            k--;
        }}
        else {
            std::rotate(nums.rbegin(), nums.rbegin() + k, nums.rend());
        }
    }
};
