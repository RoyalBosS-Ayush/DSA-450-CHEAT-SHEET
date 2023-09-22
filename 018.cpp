// https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1
// https://www.youtube.com/watch?v=5L9Jrehvoew
int getPairsCount(int arr[], int n, int k) {
    int count = 0;
    unordered_map<int, int> freq;
    
    for (int i=0; i<n; i++){
        if (freq[k - arr[i]]){
            count += freq[k - arr[i]];
        }
        freq[arr[i]]++;
    }
    
    return count;
}