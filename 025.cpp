// https://practice.geeksforgeeks.org/problems/count-element-occurences/1
int countOccurence(int arr[], int n, int k) {
    int ans = 0, max = n/k;
    unordered_map<int, int> freq;
    
    for (int i=0; i<n; i++){
        freq[arr[i]]++;
    }
    
    for (auto pair: freq){
        if (pair.second > max)
            ans++;
    }
    
    return ans;
}