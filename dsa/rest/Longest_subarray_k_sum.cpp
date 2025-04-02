#include <iostream>
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        int l = 0, r = 0;
        int ans = INT_MIN, curr = 0;
        
        while (r < N) {
            curr += A[r];
            
            while (curr > K && l <= r) {
                curr -= A[l];
                l++;
            }
            
            if (curr == K)
                ans = max(ans, r - l + 1);
            r++;
        }
        return ans;
    } 
};

