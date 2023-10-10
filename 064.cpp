// https://practice.geeksforgeeks.org/problems/search-pattern-rabin-karp-algorithm--141631/1
vector <int> search(string pat, string txt)
{
    int m=txt.size(), n=pat.size();
    vector<int> ans;

    for (int i=0; i<=m-n; i++){
        bool flag = true;

        for (int j=0; j<n; j++){
            if (pat[j] != txt[i+j]){
                flag = false;
                break;
            }
        }
        if (flag)
            ans.push_back(i+1);
    }

    if (ans.size())
        return ans;
    return {-1};
}

// https://www.youtube.com/watch?v=BQ9E-2umSWc
int d=256, mod=INT_MAX;
vector <int> search(string pat, string txt)
{
    int size_p=pat.size(), size_t=txt.size();
    int hash_p=0, hash_t=0, h=1;
    vector<int> ans;

    // pow(d, M-1)%q
    for (int i=0; i<size_p-1; i++)
        h = (h*d) % mod;

    for (int i=0; i<size_p; i++){
        hash_p = (d*hash_p + pat[i]) % mod;
        hash_t = (d*hash_t + txt[i]) % mod;
    }

    for (int i=0; i<=size_t-size_p; i++){
        if (hash_p == hash_t){
            bool flag = true;
            for (int j=0; j<size_p; j++){
                if (pat[j] != txt[i+j]){
                    flag = false;
                    break;
                }
            }
            if (flag) {
                ans.push_back(i+1);
            }
        }
        
        if (i < size_t-size_p){
            hash_t = (d * (hash_t - txt[i]*h) + txt[i+size_p]) % mod;
            
            if (hash_t < 0)
                hash_t += mod;
        }
    }
    
    if (ans.size())
        return ans;
    return {-1};
}