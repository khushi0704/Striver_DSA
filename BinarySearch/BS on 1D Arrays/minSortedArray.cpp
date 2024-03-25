int findMin(vector<int>& arr)
{
	int n = arr.size();
	int low = 0;
	int high = n-1;
	int ans=INT_MAX;
	while(low<=high){
		int mid=(low+high)/2;
		// eliminate left or right half 
		// left half is sorted 
		if(arr[mid]>=arr[low]){
			ans=min(ans,arr[low]);
			low=mid+1;
		}
		else{
			// right half is sorted
			ans=min(ans,arr[mid]);
			high=mid-1;
		}
	}
	return ans;
}