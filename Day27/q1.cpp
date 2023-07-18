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

//1st approach
vector<vector<int>> zigzag(BT*root){
        if(root == NULL)
    return { };

    queue<BT*> q;
    q.push(root);
    q.push(NULL);
    vector<int> res;
    vector<vector<int>> ans;



    while(!q.empty()){
    BT* temp = q.front();
    q.pop();

    if(temp == NULL){
    ans.push_back(res);
    res.clear();
    if(!q.empty())
    q.push(NULL);

    }else{
    res.push_back(temp-> val);

    if(temp -> left){
    q.push(temp-> left);
    }

    if(temp -> right){
    q.push(temp -> right);
    }
    }


    }

    bool flag = false;

    for(auto& v : ans){
    if(flag){
    reverse(begin(v),end(v));
    flag = false;
    }else{
    flag = true;
    }
    }

return ans;}

// 2nd approach
vector<vector<int>> zigZag(BT*root){
    if(!root)return {};
    vector<vector<int>>ans;
    stack<BT*>s1;
    stack<BT*>s2;
    s1.push(root);
    vector<int>v;
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            auto t = s1.top();
            s1.pop();
            v.push_back(t->val);
            if(t->left)s2.push(t->left);
            if(t->right)s2.push(t->right);
        }
        ans.push_back(v);
        v.clear();
        while(!s2.empty()){
            auto t = s2.top();
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


// 3rd approach
vector<vector<int>> zigZag(BT*root){
    if(!root)return {};
    vector<vector<int>>ans;
    queue<BT*>q;
    q.push(root);
    bool flag = 1;
    while(!q.empty()){
        int s = q.size();
        vector<int>v(s);
        for(int i = 0;i<s;i++){
            auto f = q.front();
            q.pop();
            int ind = (flag) ? i : (s - i - 1);
            v[ind] = f->val;
            if(f->left)q.push(f->left);
            if(f->right)q.push(f->right);}
            f = !f;
            ans.push_back(v);
    }
    return ans;
}

int main(){
    return 0;
}