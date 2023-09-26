// https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1
int smallestSubWithSum(int arr[], int n, int x)
{
    int ans=INT_MAX, l=0, r=0, sum=0;

    for (r=0; r<n; r++){
        sum += arr[r];

        while (sum>x){
            ans = min(ans, r-l+1);
            sum -= arr[l];
            l++;
        }
    }

    if (ans == INT_MAX)
        return 0;
    return ans;
}