// https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
// TLE BRUTEFORCE
long long int inversionCount(long long arr[], long long N)
{
    long long int ans = 0;
    for (long long int i=0; i<N; i++){
        long long int minIndex = i;
        for (long long int j=i+1; j<N; j++){
            if (arr[j] < arr[i])
                ans++;
        }
    }
    
    return ans;
}

// https://www.youtube.com/watch?v=sV4RhDIIKO0

void merge(long long arr[], long long n, int low, int mid, int high, long long int &count){
    long long i = low;
    long long j = mid+1;
    
    vector<long long> v;
    
    while(i <= mid && j <= high){
        if(arr[i] <= arr[j]){
            v.push_back(arr[i]);
            i++;
        }
        else{
            count += mid-i+1;
            v.push_back(arr[j]);
            j++;
        }
    }
    while(i <= mid){
        v.push_back(arr[i]);
        i++;
    }
    while(j <= high){
        v.push_back(arr[j]);
        j++;
    }
    
    long long k = low;
    for(long long l = 0; l < v.size(); l++){
        arr[k++] = v[l];
    }
}   

void mergeSort(long long arr[], int N, int low, int high, long long int &count){
    if (low < high){
        long long mid = low + (high - low)/2;
        mergeSort(arr, N, low, mid, count);
        mergeSort(arr, N, mid+1, high, count);
        merge(arr, N, low, mid, high, count);
    }
}

long long int inversionCount(long long arr[], long long N)
{
    long long int count = 0;
    mergeSort(arr, N, 0, N-1, count);
    return count;
}