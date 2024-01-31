vector<int> getSecondOrderElements(int n, vector<int> a) {
    
    int maxi=INT_MIN;
    int mini=INT_MAX;

    //find the largest and smallest elements
    for(int i=0;i<n;i++){
        maxi=max(maxi,a[i]);
        mini=min(mini,a[i]);
    }

    //now find just smaller than the largest and just greater 
    // than the smallest
    int sl=INT_MIN;
    int ss=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]>sl && a[i]!=maxi){
            sl=a[i];
        }
        if(a[i]<ss && a[i]!=mini){
            ss=a[i];
        }
    }
    return {sl,ss};
}
