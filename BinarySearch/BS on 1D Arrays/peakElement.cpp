int findPeakElement(vector<int> &arr) {
    // using brute force O(N)
    // first and last element 
    // peak is the element which is greater than its neighbours 
    int n = arr.size();
    if(arr[0]>arr[1]){
        // decreasing curve
        return 0;
    }
    else if(arr[n-1]>arr[n-2]){
        // increasing curve 
        return n-1;
    }
    // now find for rest mid elements from 1 to n-2
    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            return i;
            break;
        }
    }
    return -1;
}

int findPeakElement(vector<int> &arr) {
    int n = arr.size(); //Size of array.

    for (int i = 0; i < n; i++) {
        //Checking for the peak:
        if ((i == 0 || arr[i - 1] < arr[i])
                && (i == n - 1 || arr[i] > arr[i + 1])) {
            return i;
        }
    }
    // Dummy return statement
    return -1;
}

// OPTIMAL : O(N)
int findPeakElement(vector<int> &arr) {

    // using Binary search
    //O(logN)
    int n = arr.size();
    // check first and last elements
    if(n==1){
        return 0;
    } 
    if(arr[0]>arr[1]){
        return 0;
    }
    else if(arr[n-1]>arr[n-2]){
        return n-1;
    }
    // now use binary search 
    int i=1;
    int j=n-2;
    while(i<=j){
        int mid = (i+j)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }
        // if mid is lesser than mid-1 : decreasing curve : we need to check left portion
        if(arr[mid]<arr[mid-1]){
            j=mid-1;
        }
        // if mid is greater than mid-1 : increasing curve : we need to check right portion
        else{
            i=mid+1;
        }
    }
    return -1;
}