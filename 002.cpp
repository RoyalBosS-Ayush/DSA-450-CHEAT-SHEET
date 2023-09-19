// https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1
pair<long long, long long> getMinMax(long long a[], int n) {
    long long min=a[0], max=a[0];
    
    int l=0, r=n-1;
    while (l <= r){
        int mini = a[l] < a[r] ? a[l] : a[r];
        int maxi = a[l] > a[r] ? a[l] : a[r];
        if (mini < min)
            min = mini;
        if (maxi > max)
            max = maxi;
        l++;
        r--;
    }
    
    return {min, max};
}