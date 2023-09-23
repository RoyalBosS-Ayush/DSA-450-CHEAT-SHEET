// https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1
// https://www.youtube.com/watch?v=AlkQ3Nor6IA

// TLE
bool subArrayExists(int arr[], int n)
{
    int ans = 0, sum = 0, k = 0;
    unordered_map<int, int> freq;

    for (int i=0; i<n; i++){
        sum += arr[i];

        if (sum == k)
            ans++;

        if (freq[sum - k]){
            ans += freq[sum - k];
        }

        freq[sum]++;
    }
    
    return ans;
}

bool subArrayExists(int arr[], int n)
{
    int sum = 0, k = 0;
    unordered_map<int, bool> freq;

    for (int i=0; i<n; i++){
        sum += arr[i];

        if (sum == k)
            return true;

        if (freq[sum - k]){
            return true;
        }

        freq[sum] = true;
    }
    
    return false;
}