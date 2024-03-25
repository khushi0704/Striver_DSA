int lowerBound(vector<int> arr, int n, int x) {
	// since it is already sorted
	for(int i=0;i<n;i++){
		if(arr[i]>=x){
			return i;
		}
	}
	return n;
}

// USING BINARY SEARCH 
int lowerBound(vector<int> arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] >= x) {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}
