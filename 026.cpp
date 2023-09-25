// https://practice.geeksforgeeks.org/problems/maximum-profit4657/1
int solve(int index, int K, int A[], int N, bool buy, vector<vector<vector<int>>>&dp){
    if(index == N or K == 0)
        return false;

    if(dp[index][buy][K] != -1)
        return dp[index][buy][K];

    int profit;
    if (buy)
        profit = max(solve(index+1, K, A, N, buy, dp), A[index] + solve(index+1, K-1, A, N, false, dp));
    else 
        profit = max(solve(index+1, K, A, N, buy, dp), -A[index] + solve(index+1, K, A, N, true, dp));

    return dp[index][buy][K] = profit;
}
int maxProfit(int K, int N, int A[]) {
    vector<vector<vector<int>>>dp(N+1 ,vector<vector<int>>(2,vector<int>(K+1,-1))); // O(N*K)
    return solve(0, K, A, N, false, dp);
}