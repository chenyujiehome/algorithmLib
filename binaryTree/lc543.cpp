#include<bits/stdc++.h>
using namespace std;
 struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
    int lcMain(TreeNode* root) {
function <int(TreeNode*)> dfs=[&dfs](TreeNode* root){
    if(root==nullptr){
        return 0;
    }
    int left=dfs(root->left);
    int right=dfs(root->right);
    return max(left,right)+1;


};
        return dfs(root);
    }
};