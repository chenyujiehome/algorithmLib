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

// 二叉树遍历框架
void  invertTree(TreeNode* root) {
    if (root == nullptr) {
        return ;
    }
  swap(root->left,root->right);
invertTree(root->left);
   invertTree(root->right);
    // 后序位置

  return ;
}

    TreeNode* lcMain(TreeNode* root) {

    invertTree(root);
    return root;
}
};