vector<int> nextGreaterPermutation(vector<int> &A) {
    // permutation and combinations 
    // USING STL
    //next_permutation(A.begin(),A.end());
    //return A;
    int n = A.size();
    int i1=-1;
    for(int i=n-2;i>=0;i--){
        // if break point found
        if(A[i]<A[i+1]){
            i1=i;
            break;
        }
    }
    if(i1==-1){
        // break point doesnt exist 
        // array is in dec order , sort it in inc
        reverse(A.begin(), A.end());
        return A;
    }
    // break point exist , find the next greater element of i1
    // and swap with it 
    for(int j=n-1;j>i1;j--){
        if(A[j]>A[i1]){
            // swap it 
            int temp=A[j];
            A[j]=A[i1];
            A[i1]=temp;
            break;
        }
    }
    // reverse the right half
    reverse(A.begin() + i1 + 1, A.end());
    return A;

}