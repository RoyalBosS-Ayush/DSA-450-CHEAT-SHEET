// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

// approach: s ke left me sab 0, e ke right me sab 2, mid will traverse
void sort012(int a[], int n)
{
    int s=0, e=n-1, mid=0;
    
    while(mid<=e){
        if (a[mid] == 0){
            swap(a[s], a[mid]);
            s++;
            mid++;
        } else if (a[mid] == 1){
            mid++;
        } else {
            swap(a[mid], a[e]);
            e--;
        }
    }
}