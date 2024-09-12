struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};
int maxDepth(TreeNode* root){
  if(root == nullptr) return 0;
  int lt = maxDepth(root->left);
  int rt = maxDepth(root->right);
  return 1 + lt>=rt?lt:rt;
}

