// USING TWO SUM
string read(int n, vector<int> book, int target)
{
    // sort the array
    sort(book.begin(),book.end());
    //two pointers
    int left=0;
    int right=n-1;
    while(left<right){
        int sum = book[left]+book[right];
        if(sum==target){
            return "YES";
        }
        else if(sum<target){
            //move towards bigger numbers
            //move right
            left++;
        }
        else{
            //move towards smaller numbers
            right--;
        }
    }
    return "NO";
}

// USING HASHING
string read(int n, vector<int> book, int target)
{
   // CREATE A MAP TO STORE THE ELEMENTS
   unordered_map <int,int> mpp;
   for(int i=0;i<n;i++){
    int num = arr[i];
    int moreneeded = target-num;
    if(mpp.find(moreneeded) != mpp.end()){
        return "YES";
    }
    // if not present we will insert that number 
    mpp[num]=i;
   }
   return "NO";
}