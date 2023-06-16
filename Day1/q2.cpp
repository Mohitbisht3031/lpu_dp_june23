// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

#include<bits/stdc++.h>
using namespace std;

 int removeDuplicates(vector<int>& nums) {
     if(nums.size() == 1)return 1;
     
     int i = 0;
     int j = 1;   
     while(j < nums.size()){
        if(nums[i] != nums[j]){
            nums[i+1] = nums[j];
            i++;
        }
        j++;
     }
    return i+1;
}

int main(){
    return 0;
}