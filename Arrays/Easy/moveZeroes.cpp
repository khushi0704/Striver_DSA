// APPROACH 1 USING TEMPORARY ARRAY
vector<int> moveZeros(int n, vector<int> a) {
    // temporary array
    vector<int> v;
    // temporary array
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            continue;
        }
        else{
            v.push_back(a[i]);
            cnt++;
        }
    }
    for(int j=cnt;j<n;j++){
        v.push_back(0);
    }
    return v;
}

// APPROACH 2 USING INPLACE
vector<int> moveZeros(int n, vector<int> a) {
    for(int i=0;i<n-1;i++){
        if(a[i]==0){
            //swap it with the first non negative integer
            int j=i+1;
            while(j<n && a[j]==0){
                j++;
            }
            if(j<n){
                // then only swap it
                a[i]=a[j];
                a[j]=0;
            }
            else{
                //out of bound , reached end
                break;
            }
        }
    }
    return a;
}


//CORRECT APPROACH USING INPLACE
vector<int> moveZeros(int n, vector<int> a) {
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            a[j++]=a[i];
        }
    }
    while(j<n){
        a[j]=0;
        j++;
    }
    return a;
}
