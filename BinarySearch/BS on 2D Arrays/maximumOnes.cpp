// BRUTE FORCE : O(N2)
int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    int max = INT_MIN;
    int idx = -1;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            if(matrix[i][j]==1){
                sum+=1;
            }
        }
        if(sum>max){
            max=sum;
            idx=i;
        }
    }
    return idx;
}

// OPTIMISED : USING BINARY SEARCH
int lowerbound(vector<int> arr,int k,int val){
    int low=0;
    int high=k-1;
    int ans=k;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=val){
            // it may be the ans
            ans=mid;
            // check on left part for smaller index
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    int maxcnt=-1;
    int idx=-1;
    for(int i=0;i<n;i++){
        int curmax=m-(lowerbound(matrix[i],m,1));
        if(curmax>maxcnt){
            maxcnt=curmax;
            idx=i;
        }
    }
    return idx;
}