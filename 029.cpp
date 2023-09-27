// https://www.youtube.com/watch?v=gIZSOpW-SN0

// TC: O(n) SC: O(n)
long long trappingWater(int arr[], int n){
    vector<int> leftMax(n), rightMax(n);

    for (int i=0, maxi=0; i<n; i++){
        maxi = max(maxi, arr[i]);
        leftMax[i] = maxi;
    }

    for (int i=n-1, maxi=0; i>=0; i--){
        maxi = max(maxi, arr[i]);
        rightMax[i] = maxi;
    }

    long long ans = 0;
    for (int i=0; i<n; i++){
        ans += min(leftMax[i], rightMax[i]) - arr[i];
    }
    
    return ans;
}

// TC: O(n) SC: O(1)
long long trappingWater(int arr[], int n){
    int maxHeight=0, maxIndex=0, leftMax=0, rightMax=0;
    long long ans = 0;

    for (int i=0; i<n; i++){
        if (maxHeight < arr[i]){
            maxHeight = arr[i];
            maxIndex = i;
        }
    }

    for (int i=0; i<maxIndex; i++){
        leftMax = max(leftMax, arr[i]);
        ans += min(leftMax, maxHeight) - arr[i];
    }

    for (int i=n-1; i>maxIndex; i--){
        rightMax = max(rightMax, arr[i]);
        ans += min(rightMax, maxHeight) - arr[i];
    }

    return ans;
}