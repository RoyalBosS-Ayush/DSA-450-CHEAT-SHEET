// https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1
// https://www.youtube.com/watch?v=Yrw3MNh_368
int minJumps(int arr[], int n){
    int pos = 0, des = 0, jumps = 0;
    
    for (int i=0; i<n-1; i++){
        des = max(des, arr[i]+i);
        
        if (pos == i){
            pos = des;
            jumps++;
        }
    }
    
    if (pos >= n - 1)
        return jumps;
    return -1;
}