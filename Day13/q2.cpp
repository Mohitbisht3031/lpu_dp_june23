#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/validate-binary-search-tree/description/
 class TreeNode {
      public:
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

// bool dfs(TreeNode*root,long lb,long ub){
//     if(!root)return 1;
//     if(root->val >= ub || root->val <= lb)return 0;
//     return dfs(root->left,lb,root->val) && dfs(root->right,root->val,ub);
// }

bool isValidBST(TreeNode* root,long lb = LONG_MIN , long ub = LONG_MAX){
    if(!root)return 1;

    if(root->val >= ub || root->val <= lb)return 0;
    return isValidBST(root->left,lb,root->val) && isValidBST(root->right,root->val,ub);
    // return dfs(root,LONG_MIN,LONG_MAX);
}

int main(){
    return 0;
}