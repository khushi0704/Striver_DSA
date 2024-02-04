vector<int> spiralMatrix(vector<vector<int>>&MATRIX) {
    int row=0;
    int n=MATRIX.size();
    int m=MATRIX[0].size();
    vector <int>v;
    while(row<m && row<n){
    for(int firstRow=row;firstRow<m-row;firstRow++){
        v.push_back(MATRIX[row][firstRow]);
    }
    for(int lastCol=row+1;lastCol<n-row;lastCol++){
        v.push_back(MATRIX[lastCol][m-row-1]);
    }
        // Traverse the last row (if there is one)
        if (row < n - 1) {
            for (int lastRow = m - row - 2; lastRow >= row; lastRow--) {
                v.push_back(MATRIX[n - row - 1][lastRow]);
            }
        }

        // Traverse the first column (if there is one)
        if (row < m - 1) {
            for (int firstCol = n - row - 2; firstCol > row; firstCol--) {
                v.push_back(MATRIX[firstCol][row]);
            }
        }
    row++;
}
    return v;
}