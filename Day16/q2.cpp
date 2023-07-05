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

class LL{
    public:
    int d;
    LL*next;
    LL(int d):d(d){}
};

vector<LL*> convert(TreeNode*root){
    if(!root)return {};
    vector<LL*>ans;
    queue<TreeNode*>q;
    q.push(root);
    while (!q.empty())
    {
        int s = q.size();
        LL*head = new LL(0);
        LL*t = head;
        for(int i = 0;i<s;i++){
            TreeNode*f = q.front();
            q.pop();
            t->next = new LL(f->val);
            t = t->next;
            if(f->left){
                q.push(f->left);
            }
            if(f->right)q.push(f->right);
        }
        ans.push_back(head->next);
    }
    return ans;
}

int main(){
    return 0;
}