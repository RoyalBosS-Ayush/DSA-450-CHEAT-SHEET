// https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1
void segregateElements(int arr[],int n)
{
    // TLE Method 1: swapping postive to left side
    // for (int i=0; i<n; i++){
    //     int j = i;
    //     while(arr[j] > 0 && j > 0 && arr[j-1] < 0){
    //         swap(arr[j], arr[j-1]);
    //         j--;
    //     }
    // }
    
    // TLE Method 2: swapping negative to right side
    // for (int i=n-1; i>=0; i--){
    //     if (arr[i] < 0){
    //         int j = i;
    //         while(j < n-1 && arr[j+1] > 0){
    //             swap(arr[j], arr[j+1]);
    //             j++;
    //         }
    //     }
    // }
    
    // Method 3: traversing twice
    vector<int> temp(n);
    int index=0, tempIndex=0;
    for (int i=0; i<n; i++){
        if (arr[i] > 0){
            temp[tempIndex] = arr[i];
            tempIndex++;
        }
    }
    
    for (int i=0; i<n; i++){
        if (arr[i] < 0){
            temp[tempIndex] = arr[i];
            tempIndex++;
        }
    }
    
    for (int i=0; i<n; i++)
        arr[i] = temp[i];
}