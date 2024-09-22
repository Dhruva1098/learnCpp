
#include <iostream>
#include <vector>
using namespace std;
void createTree(vector<int>& arr,int l, int r, int i, vector<int>& tree){
  if(l == r){
    tree[i] = arr[l];
    return;
  }
  int m = (l+r)/2;
  createTree(arr, l, m, i*2 + 1, tree);
  createTree(arr, m+1, r, i*2 + 2, tree);
  tree[i] = tree[i*2 + 1] + tree[i*2 + 2];
}

int main(){
  vector<int> arr= {0,1,2,3,4,5,6,7};
  vector<int> tree(2*arr.size() - 1);
  createTree(arr,0,arr.size() -1, 0, tree);
  for(auto i : tree){
    cout << " " << i;
  }

}
