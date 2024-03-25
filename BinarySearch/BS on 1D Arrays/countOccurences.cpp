int count(vector<int>& arr, int n, int x) {
	// find total number of occurences of x in the array 
	// we are given the array is sorted
	// O(logN)
	// binary search 
	// since it is sorted array 
	// we can simply find the first occurence and last occurence of x and just subtract

	// first occurence 
	int i=0;
	int j=n-1;
	int first=-1;
	while(i<=j){
		int mid=(i+j)/2;
		if(arr[mid]==x){
			// check the left part if there is same number with smaller index
			first=mid;
			j=mid-1;
		}
		else if(arr[mid]>x){
			// we need to check left array
			j=mid-1;
		}
		else{
			// we need to check right array
			i=mid+1;
		}
	}

	// last occurence 
	i=0;
	j=n-1;
	int last=-1;
	while(i<=j){
		int mid=(i+j)/2;
		if(arr[mid]==x){
			// check the right part if there is same number with greater index
			last=mid;
			i=mid+1;
		}
		else if(arr[mid]>x){
			// we need to check left array
			j=mid-1;
		}
		else{
			// we need to check right array
			i=mid+1;
		}
	}
	if(first == -1){
		return 0;
	}
	else{
		int ans = last-first+1;
		return ans;
	}
}
