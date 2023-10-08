// https://practice.geeksforgeeks.org/problems/word-wrap1646/1
// https://www.youtube.com/watch?v=FiQY3K4_xPo
int solveWordWrap(vector<int>nums, int k) 
{ 
    int n=nums.size();
    vector<vector<int>> cost(n, vector<int> (n, 0));
    vector<int> mini(n);
    
    for (int i=0; i<n; i++){
        cost[i][i] = k - nums[i];
        
        for (int j=i+1; j<n; j++){
            cost[i][j] = cost[i][j-1] - nums[j] - 1;
        }
    }
    
    for (int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            if (j==n-1 && cost[i][j] > 0)
                cost[i][j] = 0;
            if (cost[i][j] < 0)
                cost[i][j] = INT_MAX;
            else
                cost[i][j] *= cost[i][j];
        }
    }
    
    for (int i=n-1; i>=0; i--){
        mini[i] = cost[i][n-1];
        
        for (int j=n-1; j>i; j--){
            if (cost[i][j-1] == INT_MAX)
                continue;
            if (mini[i] > cost[i][j-1] + mini[j])
                mini[i] = cost[i][j-1] + mini[j];
        }
    }
    
    return mini[0];
}