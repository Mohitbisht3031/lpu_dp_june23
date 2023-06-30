#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/most-frequent-subtree-sum/
 class TreeNode {
      public:
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

int dfs(TreeNode*root,unordered_map<int,int>&mp,int&maxi){
    if(!root)return 0;
    int ls = dfs(root->left,mp,maxi);
    int rs = dfs(root->right,mp,maxi);
    int cs = ls+rs+root->val;
    mp[cs]++;
    maxi = max(maxi,mp[cs]);
    return cs;
}

vector<int> findFrequentTreeSum(TreeNode* root) {
    if(!root)return {};
    vector<int>v;
    unordered_map<int,int>mp;
    int maxi = 0;
    dfs(root,mp,maxi);

    for(auto m:mp){
        if(m.second == maxi)v.push_back(m.first);
    }
    return v;
}

int main(){
    return 0;
}