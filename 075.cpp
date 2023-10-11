// https://practice.geeksforgeeks.org/problems/find-first-repeated-character4108/1
string firstRepChar(string s)
{
    vector<bool> exists(26);
    string ans;
    
    for (char ch: s){
        if (exists[ch - 'a']){
            ans = ch;
            return ans;
        }
        exists[ch-'a'] = true;
    }

    return "-1";
}