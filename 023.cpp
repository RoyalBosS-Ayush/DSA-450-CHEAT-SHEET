// https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1
// https://www.youtube.com/watch?v=hnswaLJvr6g
long long maxProduct(vector<int> arr, int n) {
    long long prefix = 0, suffix = 0, ans = LONG_LONG_MIN;

    for (int i=0; i<n; i++){
        if (prefix == 0)
            prefix = 1;
        if (suffix == 0)
            suffix = 1;

        prefix *= arr[i];
        suffix *= arr[n-i-1];

        ans = max(ans, max(prefix, suffix));
    }

    return ans;
}