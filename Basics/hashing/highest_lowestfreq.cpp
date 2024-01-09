vector<int> getFrequencies(vector<int>& v) {
    
    // hashmap
    // sorted way
    map<int,int> mpp;
    int n = v.size();
    //store 
    for(int i=0;i<n;i++){
        mpp[v[i]]++;
    }
    // fetch max and min element
    // key with maximum value 
    // key with minimum value
    int max_element=0;
    int min_element=0;

    int max = INT_MIN;
    int min = INT_MAX;
        for(auto it : mpp){
            if(it.second>max){
                max=it.second;
                max_element=it.first;
            }
            if(it.second<min){
                min=it.second;
                min_element=it.first;     
            }
        }
        return {max_element,min_element};
}