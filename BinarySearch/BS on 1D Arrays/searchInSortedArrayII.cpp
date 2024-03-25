bool searchInARotatedSortedArrayII(vector<int>&A, int key) {
    int n=A.size();
    int low=0;
    int high=n-1;
    // search in a rotated sorted array
    while(low<=high){
        int mid = (low+high)/2;
        if(A[mid] == key){
            return true;
        }
        // edge case
        if(A[low]==A[mid] && A[mid]==A[high]){
            low=low+1;
            high=high-1;
            continue;
        }
        // left sorted
        else if(A[low]<=A[mid]){
            // if target lies within
            if(A[low]<=key && key<=A[mid]){
                high=mid-1;
            }
            else{
            low=mid+1;
            }
        }
        else{
        // right sorted
        if(key<=A[high] && A[mid]<=key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }   
        }
    }
    return false;
}
