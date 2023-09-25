// https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(), a.end());
    long long s=0, e=m-1, ans = INT_MAX;
    
    while(e<n){
        ans = min(ans, a[e] - a[s]);
        s++;
        e++;
    }
    
    return ans;
}