int searchInsert(vector<int>& arr, int m)
{
	// USING UPPER BOUND
    int low = 0;
    int high = arr.size()-1;
    int mid = low + (high-low)/2;
    int ans = arr.size();
    while(low<=high){
        if(arr[mid] >= m){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
        mid = low + (high-low)/2;
    }
    return ans;
}