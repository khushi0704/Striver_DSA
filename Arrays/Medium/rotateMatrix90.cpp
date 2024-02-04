// BRUTE FORCE 
#include<vector>
void rotateMatrix(vector<vector<int>> &mat){
	int n = mat.size();	// row size
	vector<vector<int>> ans(n,vector<int>(n,0));
 		for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // if it belongs to column j, it goes to row j and column [n-i-1]
            ans[j][n - i - 1] = mat[i][j];
        }
    }
    	for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = ans[i][j];
        }
    }
}

// OPTIMAL APPROACH : TRANSPOSE AND THEN REVERSE
#include<vector>
void rotateMatrix(vector<vector<int>> &mat){
	int n = mat.size();	// row size

	// find transpose of the matrix
 		for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            // if it belongs to column j, it goes to row j and column [n-i-1]
            int temp=mat[i][j];
			mat[i][j]=mat[j][i];
			mat[j][i]=temp;
        }
    }
		// reverse it 
    	    for (int i = 0; i < n; i++) {
    		reverse(mat[i].begin(), mat[i].end());
    }
}