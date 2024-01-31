vector<int> rotateArray(vector<int>arr, int k) {
    // temporary array concept
    int n = arr.size();
    vector<int> a(n);
    for(int i=0;i<n;i++){
        if(i<k){ 
            a[n-k+i]=arr[i];
        }
        else{
            a[i-k]=arr[i];
        }
    }
    return a;
}
