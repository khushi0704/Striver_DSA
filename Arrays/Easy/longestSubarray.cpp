int longestSubarrayWithSumK(vector<int> a, long long k) {
    // sliding window
    int i=0;
    int j=0;
    long long sum=0;
    int n = a.size();
    int len=0;
    while(j<n){
        sum+=a[j];
        if(sum==k){
            len=max(len,j-i+1);
        }
        if(sum>k){
            //shift i
            sum=0;
            i++;
            j=i;
            continue;
        }
        j++;
    }
    return len;
}