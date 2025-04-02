#include <vector>
#include <queue>
using std::queue;
using std::vector;
struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int val) : val(val), left(NULL), right(NULL) {}
};
vector<vector<int>> LevelOrderTraversal(TreeNode* root){
  vector<vector<int>> out;
  if(root == NULL) return out;
  queue<TreeNode*> q;
  q.push(root);
  while(!q.empty()){
    int size = q.size();
    vector<int> row(size);
    bool leftToRight = true;
    for(int i = 0; i < size; i++) {
      TreeNode* node = q.front();
      q.pop();
      int insert = leftToRight?i:(size - 1 - i);
      row[insert] = node->val;
      if(node->left) q.push(node->left);
      if(node->right) q.push(node->right);
    } out.push_back(row); leftToRight = !leftToRight;
  } return out;
}
