#include <iostream>
struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
  TreeNode(int value, TreeNode* leftp, TreeNode* rightp) : val(value), left(leftp), right(rightp) {}
};
int dfsHeight(TreeNode* root){
  if(root == nullptr) return 0;
  int lh = dfsHeight(root->left);
  if(lh == -1) return -1;
  int rh = dfsHeight(root->right);
  if(rh == -1) return -1;
  if(abs(lh-rh)>1) return -1;
  return 1 + lh>=rh?lh:rh; 
}
