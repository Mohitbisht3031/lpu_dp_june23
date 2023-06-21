//https://leetcode.com/problems/n-queens/
#include<bits/stdc++.h>

using namespace std;

bool check(vector<string>&v,int i,int j){
    int r = i-1;
    while(r >= 0){
        if(v[r][j] == v[i][j])return 0;
    }
    r = i-1;
    int col = j-1;
    while(r >= 0 && col >= 0){
        if(v[r][col] == v[i][j])return 0;
        r--;
        col--;
    }
    r = i-1;
    col = j+1;
    while(r >= 0 && col < v[i].size()){
        if(v[r][col] == v[i][j])return 0;
        r--;
        col++;
    }

    return 1;
}

void dfs(vector<string>&v,int i,int n,vector<vector<string>>&ans){
    if(i >= n){
        ans.push_back(v);
        return;
    }
    for(int j = 0;j<v[i].size();j++){
        v[i][j] = 'Q';
        if(check(v,i,j))dfs(v,i+1,n,ans);
        v[i][j] = '.';
    }

    return;
}

vector<vector<string>> solveNQueens(int n) {
    vector<string>v(n,string(n,'.'));
    vector<vector<string>>ans;
    dfs(v,0,n,ans);

    return ans;
}

int main(){
    return 0;
}