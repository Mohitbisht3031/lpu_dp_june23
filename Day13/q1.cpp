#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/path-sum-iii/description/
 class TreeNode {
      public:
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

int ans = 0;

void dfs(TreeNode*root,int ts){
    if(!root)return ;
    if(root->val == ts)ans++;
    dfs(root->left,ts-root->val);
    dfs(root->right,ts-root->val);
    return ;
}

int pathSum(TreeNode* root, int targetSum) {
    if(!root)return ans;
    dfs(root,targetSum);
    pathSum(root->left,targetSum);
    pathSum(root->right,targetSum);
    return ans;
}

int main(){
    return 0;
}