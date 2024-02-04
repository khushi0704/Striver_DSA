int longestSuccessiveElements(vector<int>&a) {
    sort(a.begin(),a.end());
    // remove duplicates
    a.erase(unique(a.begin(), a.end()), a.end());
    int n = a.size();
    int i=0;
    int j=0;
    int len=0;
    int maxi=INT_MIN;
    while(i<n){
    while(a[j+1]-a[j]==1){
        j++;
        len = max(len,j-i+1);
    }
    maxi=max(maxi,len);
    j++;
    i=j;
    }
    return maxi;
}