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

class BSTIterator {
public:

    vector<int>v;
    int i;
    void dfs(TreeNode*root){
        if(!root)return;
        dfs(root->left);
        v.push_back(root->val);
        dfs(root->right);
        return;
    }
    BSTIterator(TreeNode* root) {
        dfs(root);
        i = -1;
    }
    
    int next() {
        if(i >=v.size()-1){
            i++;
            return -1;
        }
        return v[++i];
    }
    
    bool hasNext() {
        if(i+1 >= v.size())return 0;
        return 1;
    }
};



int main(){
    return 0;
}