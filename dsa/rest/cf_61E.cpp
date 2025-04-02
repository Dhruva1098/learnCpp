#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

struct segTree{
public:
  segTree(int _n) : n(_n) {
    tree.resize(4*n,0);
  }
  ll query(int x, int y){
    return query(x,y,0,n-1,0);
  }
  void update(int val, int ind){
    update(val,ind,0,n-1,0);
  }
private:
  vector<ll> tree;
  int n;
  void update(int val, int ind, int l, int r, int i){
    if(l==r){
      tree[i] = val;
      return;
    }
    int m = (l+r) >> 1;
    update(val,ind, l , m , i*2+1);
    update(val,ind, m+1, r, i*2+2);
    tree[i] = tree[i*2+1] + tree[i*2+2];
  }
  ll query(int x, int y, int l, int r, int i){
    if(x>r || y<l) return 0;
    if(l>=x && r<=y) return tree[i];
    int m = (l+r) >> 1;
    return query(x,y,l,m,i*2+1) + query(x,y,m+1,r,i*2+2);
  }
};

int main(){
  int n;
  cin >> n;
  vector<int> arr(n);
  vector<pii> eai;
  for(int j = 0; j<n; j++){
    cin >> arr[j];
    eai.push_back({arr[j],j});
  }
  sort(eai.begin(), eai.end());
  map<int,int> position;
  for(int j = 0; j < n; j++){
    position[eai[j].first] = j;
  }
  segTree tree(n);
  ll out = 0;
  for(int j = 0; j < n; j++){
    int pos = position[arr[j]];
    ll gil = tree.query(pos+1,n-1);
    ll sil = j - gil;
    ll sir = pos - sil;
    out += gil*sir;
    tree.update(pos,1);
  }
  cout << out;
}
