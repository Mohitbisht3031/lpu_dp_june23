#include<bits/stdc++.h>

using namespace std;
// https://practice.geeksforgeeks.org/problems/populate-inorder-successor-for-all-nodes/1
class BT{
    public:
    int val;
    BT*left;
    BT*right;
    BT*next;
    BT(int val){
        this->val = val;
        left = NULL;
        right = NULL;
        next = NULL;
    }
};

void dfs(BT*root,BT*&p){
    if(!root)return ;
    dfs(root->right,p);
    root->next = p;
    p = root;
    dfs(root->left,p);
    return;
}

void connectNext(BT*root){
    if(!root)return;
    BT*p = NULL;
    dfs(root,p);
    return;
}


int main(){
    return 0;
}
