// https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1
// TLE Bruteforce O(n^3)
bool find3Numbers(int A[], int n, int X)
{
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            for (int k=j+1; k<n; k++){
                if (A[i]+A[j]+A[k] == X)
                    return true;
            }
        }
    }
    
    return false;
}

bool find3Numbers(int A[], int n, int X)
{
    sort(A, A+n);
    
    for (int i=0; i<n-2; i++){
        int l = i+1;
        int h = n-1;
        
        while(l<h){
            int sum = A[i]+A[l]+A[h];
            if (sum == X)
                return true;
            else if (sum < X)
                l++;
            else
                h--;
        }
    }
    
    return false;
}