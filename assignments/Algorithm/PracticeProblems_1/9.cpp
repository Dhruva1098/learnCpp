#include <algorithm>
#include <iostream>
#include <vector>
using std::vector;
int largest_dense_substring(vector<int>& S){
    int n = S.size();
    int T[2*n + 1];
    int max = 0;
    for(int i = 0; i < 2*n + 1; i++){
        T[i] = -1;
    }
    int c = n;
    for (int  i = 0; i < n; i++){
        if(S[i] == 0) c--;
        else c++;
        if (c > n) max = i+1;
        else if(T[c] != -1 && max < i - T[c]) max = i - T[c];
        else T[c] = i;
    }
    return max;
}
int main(){
    vector<int> in = {0,1,1,0,0,1,0,0,0,0};
    std::cout << largest_dense_substring(in);
}
