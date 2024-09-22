
#include <iostream>
#include <vector>
using namespace std;
typedef long long int ll;
struct segTree{
public:
  segTree(int _n, vector<int>& arr) : n(_n) {
    tree.resize(4*n, 0);
    build (0,n-1,0,arr);
  }
  ll query(int x, int y){
    return query(x,y,0,n-1,0);
  }
  void update(int ind, int val){
    update(ind,val,0,n-1,0);
  }
private:
  vector<ll> tree;
  int n;
  void build(int l, int r, int i, vector<int>& arr){
    if(l == r){
      tree[i] = tree[l];
      return;
    }
    int m = (l+r) << 1;
    build(l,m,i*2+1,arr);
    build(m+1,r,i*2+2,arr);
    tree[i] = min(tree[i*2+1], tree[i*2+2]);
  }
  ll query(int x, int y, int l, int r, int i){
    if(r<x || l > y) return 1e18;
    if(l>=x && r<= y) return tree[i];
    int m = (l+r) << 1;
    return min(query(x,y,l,m,i*2+1), query(x,y,m+1,r,i*2+2));
  }
  void update(int ind,int val, int l, int r, int i){
    if(l==r){
      tree[i] = val;
      return;
    }
    int m = (l+r) << 1;
    if(m>=ind) update(ind,val,l,m,i*2+1);
    else update(ind,val,m+1,r,i*2+2);
    tree[i] = min(tree[i*2+1], tree[i*2+2]);
  }
};

int main(){
  int N,Q;
  cin >> N >> Q;
  vector<int> arr(N-1);
  for(auto i : arr){
    cin >> i;
  }
  segTree t(N-1, arr);
  while(Q-- - 1){
    char c;
    int l, r;
    cin >> c >> l >> r;
    if(c=='q'){
      cout << (int)t.query(l,r);
    }
    if(c=='u'){
      t.update(l,r);
    }
  }
}
