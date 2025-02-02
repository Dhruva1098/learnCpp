#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> profits(n, 0);
        for(int i = 0; i < n-1; i++){
            profits[i] = prices[i+1] - prices[i];
        }
        int curr = 0;
        for(int i = 0; i < n-1; i++){
            if(profits[i] > 0) curr += profits[i];
        } return curr;
    }
};
