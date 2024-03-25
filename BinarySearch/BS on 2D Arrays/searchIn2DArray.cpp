bool searchMatrix(vector<vector<int>>& mat, int target) {
    int m = mat.size();
    int n = mat[0].size();
    // LINEAR SEARCH 0(N2)
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

// BETTER APPROACH : CHECK EVERY ROW 
bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size();
        int n = mat[0].size();
        // binary search 
        for(int i=0;i<m;i++){
                int low=0;
                int high=n-1;
                while(low<=high){
                int mid=(low+high)/2;
                if(mat[i][mid]==target){
                    return true;
                }
                else if(mat[i][mid]<target){
                    //go right half
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
                }
        }
    return false;
}

// OPTIMISED APPROACH : FLATTEN THE ARRAY USING MODULO AND DIVIDE
bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size(); //rows
        int m = mat[0].size(); // columns
        int low=0;
        int high=n*m-1;
        while(low<=high){
            int mid = (low+high)/2;
            int row=mid/m;
            int col=mid%m;
            if(mat[row][col]==target){
                return true;
            }
            else if(mat[row][col]<=target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    return false;
}