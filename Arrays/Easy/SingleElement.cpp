#include<vector>

int getSingleElement(vector<int> &arr){
	int n = arr.size();
	int i=0;
	int j=1;
	while(i<n-1){
		if(arr[i]==arr[i+1]){
			i+=2;
		}
		else{
			return arr[i];
		}
	}
	return arr[n-1]; //last single element	
}