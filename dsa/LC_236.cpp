#include <iostream>
struct TreeNode{
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode( int val):val(val), left(NULL), right(NULL) {}
};

TreeNode* LCA(TreeNode* root, TreeNode* p, TreeNode* q){
  if(root == NULL || p == root || q == root) return root;
  TreeNode* left = LCA(root->left, p,q);
  TreeNode* right = LCA(root->right, p,q);
  if(left == NULL) return right;
  else if(right == NULL) return left;
  else return root;
}
