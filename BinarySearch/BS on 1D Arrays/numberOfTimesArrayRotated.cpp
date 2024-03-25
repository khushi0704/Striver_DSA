#include <bits/stdc++.h>
int findKRotation(vector<int> &arr){
    int n = arr.size();
	int low = 0;
	int high = n-1;
	int ans=INT_MAX;
    int idx=-1;
	while(low<=high){
		int mid=(low+high)/2;
		// eliminate left or right half 
        // if the entire array is sorted
        if(arr[low]<=arr[high]){
            if(arr[low]<=ans){
                ans=arr[low];
                idx=low;
                break;
            }
        }
		// left half is sorted 
		if(arr[low]<=arr[mid]){
			   if(arr[low]<=ans){
                ans=arr[low];
                idx=low;
            }
			low=mid+1;
		}
		else{
			// right half is sorted
			   if(arr[mid]<=ans){
                ans=arr[mid];
                idx=mid;
            }
			high=mid-1;
		}
	}
	return idx;
}