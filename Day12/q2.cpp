#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
 class TreeNode {
      public:
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

TreeNode* dfs(vector<int>&nums,int s,int e){
    if(s > e)return NULL;
    if(s==e)return new TreeNode(nums[s]);
    int mid = s+(e-s)/2;
    TreeNode*r = new TreeNode(nums[mid]);
    r->left = dfs(nums,s,mid-1);
    r->right = dfs(nums,mid+1,e);
    return r;
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
    if(nums.size() == 1)return new TreeNode(nums[0]);
    return dfs(nums,0,nums.size()-1);        
}

int main(){
    return 0;
}