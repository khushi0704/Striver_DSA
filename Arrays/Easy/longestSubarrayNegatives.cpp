#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){

    int n=nums.size();
    int len=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int s=0;
            for(int k=i;k<=j;k++){
                s+=nums[k];
            }
                if(s==k){
                    len=max(len,j-i+1);
                }
        }
    }
    return len;
}