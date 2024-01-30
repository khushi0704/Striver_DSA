void rec(int arr[],int i,int n)
{
    if(i==n){
        return;
    }
    int j=i;
    while(arr[j]<arr[j-1]){
        int temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
        j--;
    }
    rec(arr,i+1,n);
}
void insertionSort(int arr[], int n)
{
     rec(arr,0,n);
}