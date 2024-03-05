int search(vector<int>& arr, int n, int k)
{
    int low=0;
    int high=n-1;
    // search in a rotated sorted array
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == k){
            return mid;
        }
        // left sorted
        else if(arr[low]<=arr[mid]){
            // if target lies within
            if(arr[low]<=k && k<=arr[mid]){
                high=mid-1;
            }
            else{
            low=mid+1;
            }
        }
        else{
        // right sorted
        if(k<=arr[high] && arr[mid]<=k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }   
        }
    }
    return -1;
}
