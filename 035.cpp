// https://practice.geeksforgeeks.org/problems/find-the-median0527/1
int find_median(vector<int> v)
{
    sort(v.begin(), v.end());
    int n = v.size();
    
    if (n&1)
        return v[n/2];
    return (v[n/2] + v[n/2 - 1])/2;
}