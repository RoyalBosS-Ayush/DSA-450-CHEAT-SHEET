// https://practice.geeksforgeeks.org/problems/three-way-partitioning/1
void threeWayPartition(vector<int>& array,int a, int b)
{
    int l=0, r=array.size()-1, i=0;
    
    while(i<=r){
        if (array[i] < a){
            swap(array[i], array[l]);
            l++;
            i++;
        } else if (array[i] > b){
            swap(array[i], array[r]);
            r--;
        } else {
            i++;
        }
    }
}