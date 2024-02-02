long long maxSubarraySum(vector<int> arr, int n)
{
    // KADANE'S ALGORITHM
    // CHECK FOR ALL NEGATIVE CASES
    int sum=0;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>max){
            max=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    if(max<0){
        // all negatives
        return 0;
    }
    return max;
}