#include<bits/stdc++.h>

using namespace std;
// 
class BST{
    public:
    int val;
    BST*left;
    BST*right;
    BST(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

BST*dfs(vector<int>&pre,int s,int e){
    if(s > e)return NULL;
    BST*root= new BST(pre[s]);

    int i = s+1;
    while(i < e && pre[i] < pre[s])i++;

    int lpreS = s+1;
    int lpreE = i-1;

    int rpreS = i;
    int rpreE = e;

    root->left = dfs(pre,lpreS,lpreE);
    root->right = dfs(pre,rpreS,rpreE);
    return root;
}

BST* make(vector<int>&pre){
    if(pre.size() == 0)return NULL;
    return dfs(pre,0,pre.size()-1);
}

int main(){
    return 0;
}