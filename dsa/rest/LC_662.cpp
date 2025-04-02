#include <utility>
#include <queue>
typedef unsigned long long ull;
struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
};
int max(int a, int b){
  return a>=b?a:b;
}
int maxWidth(TreeNode* root){
  if(root==NULL) return 0;
  int ans = 0;
  std::queue<std::pair<TreeNode*, ull>> q;
  q.push({root,0});
  while(!q.empty()){
    ull mmin = q.front().second;
    int size = q.size();
    ull first; ull last;
    for(int i = 0; i < size; i++){
      TreeNode* node = q.front().first;
      ull curr = q.front().second - mmin;
      q.pop();
      if(i == 0) first = curr;
      if( i == size - 1) last = curr;
      if(node->left)q.push({node->left, curr*2 + 1});
      if(node->right)q.push({node->right, curr*2 + 2});
    } ans = max(ans, (int)(last - first - 1));
  } return ans;
}
