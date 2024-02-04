// BRUTE FORCE USING O(N*M SPACE)
#include <bits/stdc++.h>
void makeZeroes(vector<vector<int>> &ans, int n, int m,int k,int l) {
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i==k || j==l){
				ans[i][j]=0;
			}
		}
	}
}
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// find the ith row 
	// find jth column
	// find elements that belong to ith row or jth column 
	vector<vector<int>> ans=matrix;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				//marks all rows and columns in that as zero
				makeZeroes(ans,n,m,i,j);
			}
		}
	}
	return ans;
}

// BETTER APPROACH
use two arrays : row array to mark the rows 
col array to mark the columns
if (a[i][j]==0){
    row[i]=(1);
    col[j]=(1);
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(row[i] || col[j]){
            a[i][j]=0;
        }
    }
}