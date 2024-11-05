class Solution {
public:
    int help(int n, vector<int>& arr, vector<int>& dp){
        dp[0] = arr[0];
        for(int i = 1; i < n ; i++){
            int pick = arr[i];
            if(i>1){
                pick += dp[i-2];
            }
            int notPick = dp[i-1];
            dp[i] = max(pick, notPick);
        } return dp[n-1];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,0);
        return help(n,nums,dp); 
    }
};
