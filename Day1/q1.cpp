//https://leetcode.com/problems/merge-sorted-array/description/
#include<bits/stdc++.h>
using namespace std;

// brtue force approach 
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int>v;
    for(int i = 0;i<m;i++){
        v.push_back(nums1[i]);
    }        
    for(int j = 0;j<n;j++){
        v.push_back(nums2[j]);
    }
    sort(v.begin(),v.end());
    for(int i = 0;i<v.size();i++)nums1[i] = v[i];
}

// approach 2
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int>v;
    int i = 0 ;
    int j = 0;
    while(i < nums1.size() && j < nums2.size()){
        if(nums1[i] <= nums2[j]){
            v.push_back(nums1[i]);
            i++;
        }else{
            v.push_back(nums2[j]);
            j++;
        }
    }

    while(i < nums1.size()){
        v.push_back(nums1[i]);
        i++;
    }

    while(j < nums2.size()){
        v.push_back(nums2[j]);
        j++;
    }

    for(int i =0 ;i<v.size();i++)nums1[i] = v[i];
}

// approach 3
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//    vector<int>v;
    int i = m-1 ;
    int j = n-1;
    int k = m+n-1;

    while(i >= 0 && j >=0){
        if(nums1[i] >= nums2[j]){
            nums1[k] = nums1[i];
            i--;
            k--;
        }else{
            nums1[k] = nums2[j];
            k--;
            j--;
        }
    }

    while(j>=0){
        nums1[k] = nums2[j];
        k--;
        j--;
    }

}


int main(){
    return 0;
}