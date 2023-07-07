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

int KthSmallest(TreeNode*root,int&k){
    if(!root)return -1;
    int lans = KthSmallest(root->left,k);
    if(lans != -1)return lans;
    if(k == 1)return root->val;
    k--;
    return KthSmallest(root->right,k);
}

int main(){
    return 0;
}