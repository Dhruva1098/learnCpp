#include <vector>
#include <iostream>
#include <climits>
using std::vector;
int max_profit_possible_exactly_k(vector<int>& stocks, int k){
    int min = INT_MAX;
    int max = 0;
    int current_max = -1;
    int n = stocks.size();
    for(int i = 0; i < n - k; i++){
        if(stocks[i+k] - stocks[i] > current_max) current_max = stocks[i+k] - stocks[i];
    } return current_max;
}
int main(){
    vector<int> stocks = {4,1,1,7,1,5,3,9};
    std::cout << max_profit_possible_exactly_k(stocks, 2);
}
