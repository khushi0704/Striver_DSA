int upperBound(vector<int> &arr, int x, int n){
	// BRUTE FORCE
	int ans=n;
	for(int i=0;i<n;i++){
		if(arr[i]>x){
			ans=i;
			break;
		}
	}	
	return ans;
}

int upperBound(vector<int> &arr, int x, int n){
	// USING BINARY SEARCH
	int i=0;
	int j=n-1;
	int ans=n;
	while(i<=j){
		int mid=(i+j)/2;
		if(arr[mid]>x){
			// it may be the ans but let us check the left portion 
			// and eliminate the right portion
			ans=mid;
			j=mid-1;
		}
		else{
			// if array mid value is lesser than x
			// then we need to traverse right 
			i=mid+1;
		}
	}
	return ans;
}