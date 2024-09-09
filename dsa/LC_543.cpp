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
int height(TreeNode* root, int &dia){
  if(!root) return 0;
  int lh = height(root->left, dia);
  int rh = height(root->right, dia);
  dia = max(lh+rh, dia);
  return 1 + max(lh,rh);
}
int diameter_of_bTree(TreeNode* root){
  int dia = 0;
  height(root, dia);
  return dia;
}

