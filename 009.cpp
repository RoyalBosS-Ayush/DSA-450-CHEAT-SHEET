// https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1
// https://www.youtube.com/watch?v=t8_uxrjqC2g
int getMinDiff(int arr[], int n, int k) {
    if (n < 2) return 0;
    sort(arr, arr+n);

    int diff = arr[n-1] - arr[0];
    
    for (int i=1; i<n; i++){
        if (arr[i]-k < 0)
            continue;
            
        int maxi = max(arr[n-1]-k, arr[i-1]+k);
        int mini = min(arr[0]+k, arr[i]-k);
        
        diff = min(diff, maxi-mini);
    }

    return diff;
}