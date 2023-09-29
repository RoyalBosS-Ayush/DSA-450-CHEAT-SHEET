// https://practice.geeksforgeeks.org/problems/rotate-by-90-degree0356/1

// Step1: transpose, Step2: Flip
void rotate(vector<vector<int> >& matrix)
{
    int n = matrix.size();

    for (int i=0; i<n; i++)
        for (int j=i+1; j<n; j++)
            swap(matrix[i][j], matrix[j][i]);

    for (int i=0; i<n/2; i++)
        for (int j=0; j<n; j++)
            swap(matrix[i][j], matrix[n-i-1][j]);
}
