pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// lower bound 
	int i=0;
	int j=n-1;
	int floor=-1;
	while(i<=j){
		int mid=(i+j)/2;
		if(a[mid]<=x){
			// it may be the answer but lets check in rest
			floor=mid;
			i=mid+1;
		}
		else{
			// larger
			j=mid-1;
		}
	}
	i=0;
	j=n-1;
	int ceil=-1;
	while(i<=j){
		int mid=(i+j)/2;
		if(a[mid]>=x){
			// it may be the answer but lets check in rest
			ceil=mid;
			j=mid-1;
               }
		else {
            i = mid + 1;
                }
        }
		if(floor == -1 && ceil==-1){
			return {-1,-1};
		}
		else if(floor == -1){
			return {-1,a[ceil]};
		}
		else if(ceil == -1){
			return {a[floor],-1};
		}
        return {a[floor],a[ceil]};
}