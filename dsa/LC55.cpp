class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size = nums.size();
        vector<bool> pos(nums.size(), false);
        pos[0] = true;
        for(int i = 0; i < size; i++){
            if(pos[i] == true){
                if(nums[i] > size-i) return true;
                for(int j = i+1; j <= i+nums[i]; j++) {
                    pos[j] = true;
                }
            }
        }
        if(pos[size-1] == true) return true;
        return false;
    }
};
