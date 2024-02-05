vector<int> spiralMatrix(vector<vector<int>>&MATRIX) {
    int n=MATRIX.size();
    int m=MATRIX[0].size();
    int startingRow=0;
    int endingRow=n-1;
    int startingCol=0;
    int endingCol=m-1;
    vector <int>v;
    int total=n*m;
    int count=0;
    while(count<total){
    for(int firstRow=startingRow;count<total && firstRow<=endingCol;firstRow++){
        v.push_back(MATRIX[startingRow][firstRow]);
        count++;
    }
    startingRow++;

    for(int lastCol=startingRow;count<total && lastCol<=endingRow;lastCol++){
        v.push_back(MATRIX[lastCol][endingCol]);
        count++;
    }
    endingCol--;

    for (int lastRow = endingCol; count<total && lastRow>=startingCol; lastRow--) {
        v.push_back(MATRIX[endingRow][lastRow]);
        count++;
            }
    endingRow--;

    for (int firstCol = endingRow; count<total && firstCol>=startingRow; firstCol--) {
        v.push_back(MATRIX[firstCol][startingCol]);
        count++;
        }
    startingCol++;

    }

    return v;
}