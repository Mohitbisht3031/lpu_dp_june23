//https://leetcode.com/problems/unique-paths/description/
#include<bits/stdc++.h>
using namespace std;

// recursive approach 
int dfs(int i,int j,int m,int n){
    if(i >= m || j >= n)return 0;
    if(i == m-1 && j == n-1)return 1;

    int r = dfs(i,j+1,m,n);
    int d = dfs(i+1,j,m,n);

    return r+d;
}

int uniquePaths(int m, int n) {
    return dfs(0,0,m,n);        
}

int main(){
    return 0;
}