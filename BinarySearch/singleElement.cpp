int singleNonDuplicate(vector<int>& arr)
{
	// linear : Brute force
	int n = arr.size();
	if(n==1){
		return arr[0];
	}
	for(int i=0;i<n;i++){
		// first element 
		if(i==0){
			if(arr[i+1]!=arr[i]){
				return arr[i];
			}
		}
		// last element
		else if(i==n-1){
			if(arr[i-1]!=arr[i]){
				return arr[i];
			}
		}
		// middle elements
		else{
			if(arr[i-1]!=arr[i] && arr[i+1]!=arr[i]){
				return arr[i];
			}
		}
	}
}

// OPTIMISED SOLUTION - O(LOGn) - BINARY SEARCH
int singleNonDuplicate(vector<int>& arr)
{
	int n = arr.size();
	// edge cases condition
	if(n==1){
		return arr[0];
	}
	if(arr[0]!=arr[1]){
		return arr[0];
	}
	if(arr[n-1]!=arr[n-2]){
		return arr[n-1];
	}

	// middle elements
	int low=1;
	int high=n-2;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
			return arr[mid];
		}
		// we are on left half if (even,odd) pair is there
		if((mid%2==0 && arr[mid+1]==arr[mid])||(mid%2==1 && arr[mid-1]==arr[mid])){
			low=mid+1;
		}
		// we are on right half if (odd,even) pair is there
		else{
			high=mid-1;
		}
	}
}