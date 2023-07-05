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

bool check(TreeNode*r1,TreeNode*r2){
    if(!r1 || !r2)return r1==r2;
    if(r1->val != r2->val)return 0;
    return check(r1->left,r2->left) && check(r1->right,r2->right);
}

bool subtree(TreeNode*r1,TreeNode*r2){
    if(!r1 || !r2){
        return r1 == r2;
    }
    bool ans = 0;
    if(r1->val == r2->val)ans = ans || check(r1,r2);
    return  ans || subtree(r1->left,r2) || subtree(r1->right,r2);
}


int main(){
    return 0;
}