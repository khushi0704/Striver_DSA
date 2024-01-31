int removeDuplicates(vector<int> &arr, int n) {
	// i is a slow pointer
	// j is a fast pointer
	// i is only at distinct pos
	// j keeps incrementing if there's duplucates
	int i=0;
	int j=1;
	while(j<n){
		if(arr[i]==arr[j]){
			// duplicates
			// keep incrementing j till next distinct ele
			j++;
		}
		else{
			// distinct 
			// place it right next to ith element 
			// since j stopped at distinct
			arr[i+1]=arr[j];
			i++;
			j++;
		}
	}
	return i+1;
}