#include<bits/stdc++.h>

using namespace std;

// TC:O(n) && SC: O(n);
bool subarraySumK(vector<int>&nums,int k){
    if(nums.size() == 1)return nums[0] == k;
    int s = 0;
    unordered_map<int,int>mp;
    mp[0]++;
    for(int i = 0;i<nums.size();i++){
        s+=nums[i];
        if(mp.count(s-k))return 1;
        mp[s]++;
    }
    return 0;
}

// TC: O(n) , sc: O(1);
bool subarraySumK(vector<int>&nums,int k){
    if(nums.size() == 1)return nums[0] == k;
    int l = 0;
    int r = 0;
    int s = 0;
    while(r<nums.size()){
        s+=nums[r];
        if(s == k)return 1;
        while(s > k && l < r)s-=nums[l++];
        r++;
    }
    return 0;
}

int main(){
    return 0;
}