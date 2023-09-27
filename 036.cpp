// https://practice.geeksforgeeks.org/problems/median-of-2-sorted-arrays-of-different-sizes/1

// TC: O(m+n) SC: O(m+n)
double MedianOfArrays(vector<int>& array1, vector<int>& array2)
{
    int i=0, j=0, k=0, m=array1.size(), n=array2.size(), mid = (m+n)/2;
    vector<int> merged(m+n);
    
    while(i<m && j<n){
        if (array1[i] <= array2[j]){
            merged[k++] = array1[i++];
        } else {
            merged[k++] = array2[j++];
        }
    }
    
    while(i<m)
        merged[k++] = array1[i++];
        
    while(j<n)
        merged[k++] = array2[j++];

    if((m+n)&1)
        return merged[mid];
    return double(merged[mid] + merged[mid-1]) / 2;
}

// TC: O(m+n) SC:O(1)
double MedianOfArrays(vector<int>& array1, vector<int>& array2)
{
    int i=0, j=0, k=0, m=array1.size(), n=array2.size(), ind=(m+n)/2, ind2=ind-1, indVal=0, ind2Val=0;

    while(i<m && j<n){
        if (array1[i] <= array2[j]){
            if (k == ind) indVal = array1[i];
            if (k == ind2) ind2Val = array1[i];
            k++;
            i++;
        } else {
            if (k == ind) indVal = array2[j];
            if (k == ind2) ind2Val = array2[j];
            k++;
            j++;
        }
    }

    while(i<m){
        if (k == ind) indVal = array1[i];
        if (k == ind2) ind2Val = array1[i];
        k++;
        i++;
    }

    while(j<n){
        if (k == ind) indVal = array2[j];
        if (k == ind2) ind2Val = array2[j];
        k++;
        j++;
    }

    if((m+n)&1)
        return indVal;
    return double(indVal + ind2Val) / 2;
}