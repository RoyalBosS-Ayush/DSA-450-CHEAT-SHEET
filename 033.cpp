// https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1
int minSwap(int arr[], int n, int k) {
    int good=0, bad=0;

    for (int i=0; i<n; i++)
        if (arr[i] <= k)
            good++;

    for (int i=0; i<good; i++)
        if (arr[i] > k)
            bad++;
            
    int l=0, r=good, ans=bad;

    while(r<n){
        if (arr[r] > k)
            bad++;
        if (arr[l] > k)
            bad--;

        ans = min(ans, bad);
        l++;
        r++;
    }
    
    return ans;
}