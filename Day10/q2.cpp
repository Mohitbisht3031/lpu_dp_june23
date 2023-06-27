#include<bits/stdc++.h>
using namespace std;

vector<int> stockSpan(vector<int>&price){
    if(price.size() <= 1)return (price.size() == 0 ? vector<int>(0) : vector<int>(1,1));
    stack<int>stk;
    vector<int>v(price.size(),1);
    stk.push(0);
    int i = 1;
    while(i < price.size()){
        while(!stk.empty() && price[stk.top()] < price[i]){
            stk.pop();
        }
        v[i] = (stk.empty() ? i+1 : i - stk.top());
        stk.push(i);
    }
    return v;
}

int main(){
    return 0;
}