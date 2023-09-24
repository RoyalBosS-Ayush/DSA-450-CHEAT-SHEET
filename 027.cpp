// https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1
string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int, int> freq1;

    for (int i=0; i<n; i++){
        freq1[a1[i]]++;
    }
    
    for (int i=0; i<m; i++){
        if (!freq1[a2[i]])
            return "No";
        freq1[a2[i]]--;
    }
    
    return "Yes";
}