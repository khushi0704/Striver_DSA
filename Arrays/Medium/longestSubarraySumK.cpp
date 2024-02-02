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
            //as soon as i get the sum k we will change the window size
            len=max(len,j-i+1);
            //change the position of i
            // and sum will become zero
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