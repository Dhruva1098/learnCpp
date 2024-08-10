/*
* 8. A binary string is called dense if the numner of 1s in the string is more than the number of 0s. For example 1,101,110101, are dense but 1001,1000001 are not dense. 
* Given a binary string of length n, design an O(n log n) algorithm to compute the no. of dense sub-strings of the given string. 
* or example, no. of dense substrings for 10101 is 6.
*/

#include <iostream>
#include <vector>
int merge(int A[], int l, int r) {
  int i = l; int j = (l+r)/2; int p = 0; int c = 0;
  while((i <= (l+r)/2) && (j < r)) {
    if(A[i] > A[j]) B[p++] = A[i++];
    else{ B[p++] = A[j++]}
    c+= (l+r)/2 -i + 1;
  } return c;
}
int IP(int A[],int l,int r) {
  if (l < r){
    return IP(A, l, (l+r)/2) + IP(A,(l+r)/2,r) + merge(A,l,r);
  } else return 0;
}
int calculate_dense_substrings(std::vector<int>& N){
  int n = N.size();
  int count_arr[n];
  count_arr[0] = N[0];
  for(int i = 1; i < n; i++) {
    if(N[i] == 1) count_arr[i] = count_arr[i - 1] + 1;
    else if(N[i] == 0) count_arr[i] = count_arr[i - 1] - 1;
  }
  return IP(count_arr, 0, n-1);
}
