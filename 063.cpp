// https://practice.geeksforgeeks.org/problems/word-break1352/1
bool solve(int index, string remaining, string &A, unordered_map<string, bool> &dp){
    if (index == A.size())
        return remaining == "";
        
    remaining += A[index];
    
    if (dp[remaining])
        if (solve(index+1, "", A, dp))
            return true;
            
    return solve(index+1, remaining, A, dp);
}
int wordBreak(string A, vector<string> &B) {
    unordered_map<string, bool> dp;
    
    for (string s: B)
        dp[s] = true;
        
    return solve(0, "", A, dp);
}