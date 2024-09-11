#include <iostream>
struct TreeNode{
  int val;
  TreeNode* left;
  TreeNode* right;
};
bool symUtil(TreeNode* root1, TreeNode* root2){
  if(root1 == NULL || root2 == NULL) return root1 == root2;
  return (root1->val == root2->val) && symUtil(root1->left, root2->right) && symUtil(root1->right, root2->left);
}
bool isSymmetric(TreeNode* root){
  if(root == NULL) return true;
  return symUtil(root->left,root->right);
}
