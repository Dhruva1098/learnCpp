
#include <iostream>
struct TreeNode{
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int val) : val(val), left(NULL), right(NULL) {}
};

bool isSameTree(TreeNode *p, TreeNode* q){
  if(q == NULL && p == NULL) return true;
  if(q == NULL || p == NULL) return false;
  else if((p->val == q->val) && (isSameTree(p->left, q->left)) && (isSameTree(p->right,q->right))) return true;
  return false;
}
