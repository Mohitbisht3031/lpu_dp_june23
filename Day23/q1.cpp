#include<bits/stdc++.h>

using namespace std;
// 
class BT{
    public:
    int val;
    BT*left;
    BT*right;
    BT(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

void dfs(BT*root,vector<pair<double,int>>&v,int l){
    if(!root)return;

    if(l > v.size())v.push_back({root->val,1});
    else{
        v[l-1].first+=root->val;
        v[l-1].second++;
    }

    dfs(root->left,v,l+1);
    dfs(root->right,v,l+1);
    return ;
}

vector<double> average(BT*root){
    if(!root)return {};
    vector<pair<double,int>>v;
    dfs(root,v,1);

    vector<double>ans;

    for(int i = 0;i<v.size();i++){
        ans.push_back((v[i].first / v[i].second));
    }

    return ans;
}


int main(){
    return 0;
}