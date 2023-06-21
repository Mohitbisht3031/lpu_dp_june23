// https://leetcode.com/problems/word-break/
#include<bits/stdc++.h>

using namespace std;

// recursive code
bool dfs(string&s,unordered_map<string,int>&mp,int i){
    if(i >= s.size())return 1;
    string str ="";
    for(int j = i;j<s.size();j++){
        str+=s[j];
        if(mp.count(str) && dfs(s,mp,j+1)){
            return 1;
        }
    }
    return 0;
}

bool wordBreak(string s, vector<string>& wordDict) {
    unordered_map<string,int>mp;
    for(string s : wordDict)mp[s]++;
    return dfs(s,mp,0);      
}

int main(){
    return 0;
}