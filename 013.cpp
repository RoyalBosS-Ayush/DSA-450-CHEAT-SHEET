// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
long long maxSubarraySum(int arr[], int n){
    long long ans = LONG_LONG_MIN, sum = 0;

    for (int i=0; i<n; i++){
        sum += arr[i];
        
        if (sum>ans)
            ans = sum;

        if (sum < 0)
            sum = 0;
    }

    return ans;
}