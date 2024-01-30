void bubbleSort(vector<int> &arr, int n)
{
    if(n==1){
        return;
    }
    for(int i=0;i<=n-2;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    bubbleSort(arr,n-1);
}