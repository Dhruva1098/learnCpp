#include <vector>
#include <iostream>
#include <climits>
using std::vector;
int max_profit_possible(vector<int>& stocks){
    int min = INT_MAX;
    int max = 0;
    int current_max = -1;
    int n = stocks.size();
    for(int i = 0; i < n; i++){
        if(stocks[i] < min) min = stocks[i];
        current_max = stocks[i] - min;
        if(current_max>max) max = current_max;
    } return current_max;
}
int main(){
    vector<int> stocks = {4,5,6,7,1,2,3,9};
    std::cout << max_profit_possible(stocks);
}
