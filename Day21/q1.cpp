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

void in(BST*root,vector<int>&v){
    if(!root)return;
    in(root->left,v);
    v.push_back(root->val);
    in(root->right,v);
    return;
}

pair<int,int>maxiMini(BST*root,int val){
    if(!root)return {-1,-1};
    vector<int>v;
    in(root,v);

    int lInd = lower_bound(v.begin(),v.end() , val) - v.begin();
    int uInd = upper_bound(v.begin(),v.end() , val) - v.begin();

    pair<int,int>p = {-1,-1};
    if(lInd < v.size())p.first = v[lInd];
    if(uInd < v.size())p.second = v[uInd];

    return p;
}

// without extra space
void in(BST*root,int&mini,int&maxi,int val){
    if(!root)return;

    in(root->left,mini,maxi,val);
    if(root->val <= val){
        mini = max(mini,root->val);
    }
    if(root->val >= val){
        maxi = min(maxi,root->val);
    }

    in(root->right,mini,maxi,val);

    return;
}

pair<int,int>maxiMini(BST*root,int val){
    if(!root)return {-1,-1};
    int maxi = root->val;
    int mini = root->val;
    in(root,mini,maxi,val);
    return {mini,maxi};
}

// optimized
void in(BST*root,int&mini,int&maxi,int val){
    if(!root)return;

    in(root->left,mini,maxi,val);
    if(root->val <= val){
        mini = max(mini,root->val);
    }
    if(root->val >= val){
        maxi = min(maxi,root->val);
    }

    in(root->right,mini,maxi,val);

    return;
}

pair<int,int>maxiMini(BST*root,int val){
    if(!root)return {-1,-1};
    int maxi = root->val;
    int mini = root->val;
    if(root->val < val)in(root->right,mini,maxi,val);
    else in(root->left,mini,maxi,val);
    return {mini,maxi};
}


int main(){
    return 0;
}