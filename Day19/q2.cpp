#include<bits/stdc++.h>

using namespace std;

int subarraySumK(vector<int>&nums,int k){
    if(nums.size() == 1)return nums[0] == k;
    int s = 0;
    unordered_map<int,int>mp;
    mp[0] = 1;
    int c = 0;
    for(int e:nums){
        s+=e;
        c+=mp[s-k];
        mp[s]++;
    }
    return c;
}

int main(){
    return 0;
}