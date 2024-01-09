// (35/50)
vector<int> countFrequency(int n, int x, vector<int> &nums){
    //hash array
    int hash[x+1] ={0};
    //prestore
    for(int i=0;i<n;i++){
        hash[nums[i]]+=1;
    }
    //fetch
    vector<int> freq;
    for(int j=1;j<=n;j++){
        freq.push_back(hash[j]);
    }
    return freq;
    }

    // alt (50/50)
    vector<int> countFrequency(int n, int x, vector<int> &nums){

    // Write your code here.
    vector<int> hashArr(n);
    for(int i = 0; i < n; i++)
    {
        hashArr[nums[i] - 1]++;             //We reduce 1 to adjust the values to array indexing.
    }
    return hashArr;

}