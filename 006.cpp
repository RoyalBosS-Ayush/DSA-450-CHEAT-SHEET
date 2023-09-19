// https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1
int doUnion(int a[], int n, int b[], int m)  {
    unordered_map<int, bool> unionMap;

    for (int i=0; i<n; i++)
        unionMap[a[i]] = true;

    for (int i=0; i<m; i++)
        unionMap[b[i]] = true;

    return unionMap.size();
}