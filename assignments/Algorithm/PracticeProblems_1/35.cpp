#include <iostream>
#include <vector>
using std::vector;
int k_rank_in_merged_array(vector<int> A, vector<int> B, int la, int ra, int lb, int rb, int k){
    if (ra < la) return B[rb - k + 1];
    if (rb < lb) return A[ra - k + 1];
    int ma = (ra + la) / 2;
    int mb = (rb + lb) / 2;
    int rhs_count = (ra - ma + 1) + (ra - mb + 1);
    if (A[ma] <= B[mb]) {
        if ( k <= rhs_count){
            return k_rank_in_merged_array(A,B,la,ra,mb+1,rb,k);
        } else return k_rank_in_merged_array(A,B, la, ma - 1,lb,rb, k -(ra - ma+1));
    } else {
        if ( k <= rhs_count){
            return k_rank_in_merged_array(A,B,ma + 1, ra, lb, rb, k);
        } else return k_rank_in_merged_array(A,B,la,ra,lb, mb - 1 , k - (mb - lb +1));
    }
}
int main(){
    vector<int> A = {1,2,4,7,8,11,14,16};
    vector<int> B  = {1,4,6,7,8,9,10};
    std::cout << k_rank_in_merged_array(A,B,0,A.size()-1,0,B.size()-1,1);
}
