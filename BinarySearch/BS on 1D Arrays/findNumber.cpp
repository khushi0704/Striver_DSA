int search(vector<int> &nums, int target) {
    // binary search
    // sorted in increasing order
    int n = nums.size();
    int i=0;
    int j=n-1;
    while(i<=j){
        int mid=(i+j)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            // go towards right 
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }
    return -1;
}