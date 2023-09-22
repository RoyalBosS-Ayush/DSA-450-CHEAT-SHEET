// https://practice.geeksforgeeks.org/problems/common-elements1132/1
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
{
    vector<int> ans;
    set<int> s;
    int i=0, j=0, k=0;
    
    while(i<n1 && j<n2 && k<n3){
        if (A[i] == B[j] && B[j] == C[k]) {
            s.insert(A[i]);
            i++;
            j++;
            k++;
        } else if (A[i] < B[j]) {
            i++;
        } else if (B[j] < C[k]) {
            j++;
        } else {
            k++;
        }
    }
    
    for (int num: s)
        ans.push_back(num);

    return ans;
}