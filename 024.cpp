// https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1
int findLongestConseqSubseq(int arr[], int N)
{
    sort(arr, arr+N);
    int ans = 0, curr = 0;
    
    for (int i=1; i<N; i++){
        if (arr[i] == arr[i-1])
            continue;
        if (arr[i] == arr[i-1] + 1){
            curr++;
            ans = max(ans, curr);
        } else 
            curr = 0;
    }
    
    return ans + 1;
}