//https://leetcode.com/problems/set-matrix-zeroes/
#include<bits/stdc++.h>
using namespace std;

// brute force

void setZeroes(vector<vector<int>>& matrix) {
    vector<int>row(matrix.size(),-1);
    vector<int>col(matrix[0].size(),-1);

    for(int i = 0;i<matrix.size();i++){
        for(int j = 0;j<matrix[0].size();j++){
            if(matrix[i][j] == 0){
                row[i] = 0;
                col[j] = 0;
            }
        }
    }

    for(int i = 0;i<matrix.size();i++){
        for(int j = 0;j<matrix[0].size();j++){
            if(row[i] == 0 || col[j] == 0){
                matrix[i][i] = 0;
            }
        }
    }
    return ;
}

int main(){
    return 0;
}