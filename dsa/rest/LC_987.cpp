#include <vector>
#include <map>
#include <set>
#include <utility>
#include <queue>
using std::vector;
using std::map;
using std::multiset;
using std::pair;

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int val) : val(val), left(NULL), right(NULL) {}
};

vector<vector<int>> verticalTraversal(TreeNode* root){
  map<int, map<int, multiset<int>>> nodes;
  std::queue<pair<TreeNode*, pair<int,int>>> remaining;
  remaining.push({root,{0,0}});
  while(!remaining.empty()){
    auto p = remaining.front();
    remaining.pop();
    TreeNode* node = p.first;
    int x = p.second.first;
    int y = p.second.second;
    nodes[x][y].insert(node->val);
    if(node->left)(remaining.push({node->left,{x-1,y+1}}));
    if(node->right)(remaining.push({node->right,{x+1,y+1}}));
  }
  vector<vector<int>> out;
  for(auto p:nodes){
    vector<int> col;
    for(auto q: p.second){
      col.insert(col.end(),q.second.begin(),q.second.end());
    }
    out.push_back(col);
  }return out;
}

