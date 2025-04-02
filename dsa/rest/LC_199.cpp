#include <vector>
using std::vector;

struct TreeNode{
  int val;
  TreeNode* left;
  TreeNode* right;
};
void rec(TreeNode* root, int level, vector<int>& out){
  if(root==NULL) return;
  if(out.size() == level) out.push_back(root->val);
  rec(root->right, level+1,out);
  rec(root->left, level+1, out);
}
vector<int> rightView(TreeNode* root){
  vector<int> out;
  rec(root,0,out);
  return out;
}
