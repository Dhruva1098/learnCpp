#include <iostream>

struct TreeNode{
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int val) : val(val), left(NULL), right(NULL) {}
};
int max(int a, int b){
  return a<=b?b:a;
}
int findMaxPathSum(TreeNode* root, int& maxi){
  if(!root) return 0;
  int lh = max(0, findMaxPathSum(root->left, maxi));
  int rh = max(0, findMaxPathSum(root->right, maxi));
  maxi = max(maxi, lh+rh+root->val);
  return max(lh,rh) + root->val;
}
int maxSum(TreeNode* root){
  int maxi = INT_MIN;
  findMaxPathSum(root, maxi);
  return maxi;
}
