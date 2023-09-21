// https://practice.geeksforgeeks.org/problems/stock-buy-and-sell-1587115621/1
// vector<vector<int> > stockBuySell(vector<int> A, int n){
//     vector<vector<int>> ans;
    
//     int buyIndex = -1;
//     for (int i=1; i<n; i++){
//         if (A[i] > A[i-1]){
//             if (buyIndex == -1){
//                 buyIndex = i - 1;
//             } else {
//                 buyIndex = A[buyIndex] < A[i-1] ? buyIndex : i-1;
//             }
//         } else if (A[i] < A[i-1] && buyIndex != -1){
//             ans.push_back({buyIndex, i-1});
//             buyIndex = i;
//         }
//     }
    
//     if (buyIndex != -1 && buyIndex != n-1){
//         ans.push_back({buyIndex, n-1});
//     }
    
//     return ans;
// }

vector<vector<int> > stockBuySell(vector<int> A, int n){
    vector<vector<int>> ans;
    int i=0;
    
    while(i<n){
        int j = i+1;
        while(j<n && A[j] > A[j-1]){
            j++;
        }
        if (j != i+1){
            ans.push_back({i, j-1});
        }
        i = j;
    }
    
    return ans;
}