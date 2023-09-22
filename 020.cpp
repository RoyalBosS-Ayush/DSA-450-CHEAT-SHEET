// https://www.youtube.com/watch?v=kQrezgskpho
void rearrange(long long *arr, int n) 
{ 
    int min_index = 0;
    int max_index = n-1;
    int max = arr[n-1] + 1;
    
    for(int i=0; i<n; i++){
        if (i&1){
            arr[i] += (arr[min_index] % max) * max;
            min_index++;
        } else {
            arr[i] += (arr[max_index] % max) * max;
            max_index--;
        }
    }
    
    for (int i=0; i<n; i++)
        arr[i] /= max;
}