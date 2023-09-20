// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1

// TLE
void merge(long long arr1[], long long arr2[], int n, int m) 
{ 
    int index = 0, index2 = 0;
    
    while(index<n){
        if (arr1[index] > arr2[index2]){
            swap(arr1[index], arr2[index2]);

            int tempIndex = 0;
            while(tempIndex < m-1 && arr2[tempIndex] > arr2[tempIndex+1]){
                int temp = arr2[tempIndex];
                arr2[tempIndex] = arr2[tempIndex+1];
                arr2[tempIndex+1] = temp;
                tempIndex++;
            }
        }
        index++;
    }
}

void merge(long long arr1[], long long arr2[], int n, int m) 
{ 
    int left = n-1;
    int right = 0;

    while(left >= 0 && right < m) {
        if(arr1[left] > arr2[right]) {
            swap(arr1[left], arr2[right]);
            left--;
            right++;
        } else
            break;
    }

    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
}