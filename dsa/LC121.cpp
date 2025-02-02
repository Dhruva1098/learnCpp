#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int min = INT_MAX;
        int max = -1;
        for(int i : prices){
            if(i < min) {min = i; max = i;}
            if(i>max) {max = i;}
            if(max - min > profit) profit = max - min;
        } return profit;
    } 
};
