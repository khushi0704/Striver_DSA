pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // first and last occurence of k 
    int i=0;
    int j=n-1;
    int first=-1;
    int last=-1;
    while(i<n){
        if(arr[i]==k){
            first=i;
            break;
        }
        i++;
    }
    while(j>=0){
        if(arr[j]==k){
            last=j;
            break;
        }
        j--;
    }
    return {first,last};
}
