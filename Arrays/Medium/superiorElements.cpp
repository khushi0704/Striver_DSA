vector<int> superiorElements(vector<int>&a) {
    int n = a.size();
    int max=0;
    vector<int> superior;
    for(int i=n-1;i>=0;i--){
        if(a[i]>max){
            max=a[i];
            superior.push_back(a[i]);
        }
    }
    return superior;
}