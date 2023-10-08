// https://practice.geeksforgeeks.org/problems/next-permutation5226/1
vector<int> nextPermutation(int N, vector<int> arr){
    int i;
    
    for(i=N-1; i>0; i--){
        if (arr[i-1] < arr[i])
            break;
    }
    
    if (i != 0){
        for(int j=N-1; j>=i; j--){
            if (arr[j] > arr[i-1]){
                swap(arr[j], arr[i-1]);
                break;
            }
        }
    }
    
    reverse(arr.begin()+i, arr.end());
    
    return arr;
}