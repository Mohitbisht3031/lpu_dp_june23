#include<bits/stdc++.h>

using namespace std;

bool redundentPair(string expression){
    if(expression.size() == 0)return 0;
    stack<char>stk;
    string ops = "+-/*";
    for(char ch : expression){
        if(ch == '(' || ops.find(ch) != string::npos){
            stk.push(ch);
        }else if(ch == ')'){
            if(!stk.empty() && stk.top() != '('){
                stk.pop();
                stk.pop();
            }else stk.push(ch);
        }
    }

    return stk.size() == 0;
}

int main(){
    return 0;
}