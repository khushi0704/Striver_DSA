vector<int> alternateNumbers(vector<int>&a) {
    int n = a.size();
    int pos=0;
    int neg=1;
    vector<int> alt(n);
    for(int i=0;i<n;i++){
        if(a[i]>0){
            //positive number 
            // place in even positions
            alt[pos]=a[i];
            pos+=2;
        }
        else{
            //negative number
            // place in odd positions 
            alt[neg]=a[i];
            neg+=2;
        }
    }
    return alt;
}

// TIME COMPLEXITY - O(N)
// SPACE COMPLEXITY - 0(N)

