#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/count-complete-tree-nodes/description/
 class TreeNode {
      public:
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

// brute force approach
int countNodes(TreeNode* root) {
      if(!root)return 0;
      return countNodes(root->left)+countNodes(root->right)+1;      
}

// optimize this
// O(log(n)^2)
int countH(TreeNode*r){
    if(!r)return 0;
    return countH(r->left)+1;
}

int countNodes(TreeNode*r){
    int h = countH(r);
    if(h == 0)return 0;

    if(countH(r->right) == h-1){
        return (1 << (h-1)) + countNodes(r->right);
    }
    
    return (1 << (h-2)) + countNodes(r->left);

}


int main(){
    return 0;
}