void bubbleSort(int arr[], int n) 
{
    // largest element at the end
    for(int i=0;i<n;i++){
        int swapped=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=1;
            }
        }
        if(!swapped){
            break;
        }
    }
}