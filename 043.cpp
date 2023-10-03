// https://practice.geeksforgeeks.org/problems/maximum-difference-between-pair-in-a-matrix/1
int findMaxValue(vector<vector<int>>&mat, int N)
{
    int ans = INT_MIN;
    vector<vector<int>> minMat(N, vector<int>(N));
    minMat[0][0] = mat[0][0];
    
    for (int i=1; i<N; i++){
        minMat[i][0] = min(mat[i][0], minMat[i-1][0]);
        minMat[0][i] = min(mat[0][i], minMat[0][i-1]);
    }
    
    for (int i=1; i<N; i++){
        for (int j=1; j<N; j++){
            ans = max(ans, mat[i][j] - minMat[i-1][j-1]);
            minMat[i][j] = min({minMat[i-1][j], minMat[i][j-1], minMat[i-1][j-1], mat[i][j]});
        }
    }
    
    return ans;
}