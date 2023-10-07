// https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1
// https://www.youtube.com/watch?v=He3tjOT3jac
int LongestRepeatingSubsequence(string str){
    int n=str.size();
    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));

    for (int i=0; i<=n; i++) {
        for (int j=0; j<=n; j++) {
            if (i==0 || j==0)
                dp[i][j] = 0;
            else if (str[i-1] == str[j-1] && i != j)
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    
    return dp[n][n];
}