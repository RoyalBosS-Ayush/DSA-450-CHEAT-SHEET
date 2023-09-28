// https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1
vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
{
    vector<int> ans;
    int startingRow=0, startingCol=0, endingRow=r-1, endingCol=c-1, remaining=r*c;

    while(remaining){
        for (int i=startingCol; i<=endingCol && remaining; i++){
            ans.push_back(matrix[startingRow][i]);
            remaining--;
        }
        startingRow++;
        for (int i=startingRow; i<=endingRow && remaining; i++){
            ans.push_back(matrix[i][endingCol]);
            remaining--;
        }
        endingCol--;
        for (int i=endingCol; i>=startingCol && remaining; i--){
            ans.push_back(matrix[endingRow][i]);
            remaining--;
        }
        endingRow--;
        for (int i=endingRow; i>=startingRow && remaining; i--){
            ans.push_back(matrix[i][startingCol]);
            remaining--;
        }
        startingCol++;
    }
    
    return ans;
}