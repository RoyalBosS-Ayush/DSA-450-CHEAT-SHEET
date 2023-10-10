// https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1
int romanToDecimal(string &str) {
    int ans=0, n=str.size();
    unordered_map<char, int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
    
    for (int i=0; i<n-1; i++){
        if (m[str[i]]<m[str[i+1]])
            ans -= m[str[i]];
        else
            ans += m[str[i]];
    }
    ans += m[str[n-1]];
    
    return ans;
}