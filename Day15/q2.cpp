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

int widthOfBinaryTree(TreeNode* root) {
    if(!root)return 0;
    unsigned long long int maxi = 0;
    queue<pair<TreeNode*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        int d = (q.back().second - q.front().second +1);
        maxi = (maxi < d ? d : maxi);
        int s = q.size();
        for(int i = 0;i<s;i++){
            auto f = q.front();
            q.pop();
            if(f.first->left){
                q.push({f.first->left,2*f.second+1});
            }
            if(f.first->right){
                q.push({f.first->right,2*f.second+2});
            }
        }
    }
    return maxi;
}

int main(){
    return 0;
}