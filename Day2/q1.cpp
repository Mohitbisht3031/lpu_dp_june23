//https://leetcode.com/problems/rotate-array/description/
#include<bits/stdc++.h>
using namespace std;
// brute force
void rotate(vector<int>& nums, int k) {
    vector<int>v(nums.size());
    int size = nums.size();
    for(int i = 0;i<nums.size();i++){
        v[(i+k)%size] = nums[i];
    }

    for(int i = 0;i<nums.size();i++)nums[i] = v[i];
    return ;
}

// optimized
void rotate(vector<int>& nums, int k) {
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
    return ;
}

int main(){
    return 0;
}