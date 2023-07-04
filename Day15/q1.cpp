#include<bits/stdc++.h>
using namespace std;

 class TreeNode {
      public:
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

int dfs(TreeNode*root,int&maxi){
    if(!root)return 0;
    int ls = max(0,dfs(root->left,maxi));
    int rs = max(0,dfs(root->right,maxi));

    int pathsum = ls+rs+root->val;
    maxi = max(maxi,pathsum);

    return max(ls,rs)+root->val;
}

int maxPathSum(TreeNode* root) {
    if(!root)return 0;
    int maxi = 0;
    dfs(root,maxi);
    return maxi;
}


int main(){
    return 0;
}