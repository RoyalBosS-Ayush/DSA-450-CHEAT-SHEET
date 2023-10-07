// https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1
void solve(int l, int r, string &S, vector<string> &ans, map<string, bool> &m){
    if (l == r) {
        if (!m[S]) {
            m[S] = true;
            ans.push_back(S);
        }
    } else {
        for (int i=l; i<r; i++) {
            swap(S[l], S[i]);
            solve(l+1, r, S, ans, m);
            swap(S[l], S[i]);
        }
    }
}
vector<string>find_permutation(string S)
{
    map<string, bool> m;
    vector<string> ans;
    solve(0, S.size(), S, ans, m);
    return ans;
}