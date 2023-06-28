// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
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

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    if(!root)return {};
    vector<vector<int>>ans;
    stack<TreeNode*>s1;
    stack<TreeNode*>s2;
    vector<int>v;
    s1.push(root);
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            TreeNode* t = s1.top();
            s1.pop();
            v.push_back(t->val);
            if(t->left)s2.push(t->left);
            if(t->right)s2.push(t->right);
        }
        ans.push_back(v);
        v.clear();
        while(!s2.empty()){
            TreeNode* t = s2.top();
            s2.pop();
            v.push_back(t->val);
            if(t->right)s1.push(t->right);
            if(t->left)s1.push(t->left);
        }
        ans.push_back(v);
        v.clear();
    }

    return ans;
}

int main(){
    return 0;
}