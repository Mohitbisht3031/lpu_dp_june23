#include<bits/stdc++.h>

using namespace std;

class Stack{
    queue<int>q;
    public:
    
    int size(){
        return q.size();
    }

    int isEmpty(){
        return q.empty();
    }

    void push(int e){
        q.push(e);
        return;
    }

    int pop(){
        if(q.empty())return -1;
        int s = q.size();
        for(int i = 0;i<=size()-2;i++){
            int e = q.front();
            q.pop();
            q.push(e);
        }
        int e = q.front();
        q.pop();
        return e;
    }

    int top(){
        return q.back();
    }

};

int main(){
    return 0;
}