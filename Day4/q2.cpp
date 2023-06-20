//https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
#include<bits/stdc++.h>
using namespace std;

// recursive approach
void dfs(string s,int i,vector<string>&ans,vector<string>&alfa,string str){
    if(i >= s.size()){
        ans.push_back(str);
        return;
    }

    for(int j = 0;j<alfa[s[i]-'0'].size();j++){
        dfs(s,i+1,ans,alfa,str+alfa[s[i]-'0'][j]);
    }
    return;
} 
vector<string> letterCombinations(string digits) {
    vector<string>ans;
    vector<string>alfa = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    dfs(digits,0,ans,alfa,"");
    return ans;        
}

int main(){
    return 0;
}