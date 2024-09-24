#include <iostream>
#include <map>
#include <utility>
#include <queue>
using namespace std;
struct TreeNode{
  int val;
  TreeNode* left;
  TreeNode* right;
};
vector<int> topView(TreeNode* root){
  vector<int> out;
  if(root == NULL) return out;
  map<int,int> map;
  queue<pair<TreeNode*,int>> q;
  q.push({root,0});
  while(!q.empty()){
    auto p = q.front();
    q.pop();
    TreeNode* node = p.first;
    int line = p.second;
    if(map.find(line) == map.end()){
      map[line] = node->val;
    }
    if(node->left)q.push({node->left,line-1});
    if(node->right)q.push({node->right,line+1});
  }
  for(auto p: map){
    out.push_back(p.second);
  }return out;
}
