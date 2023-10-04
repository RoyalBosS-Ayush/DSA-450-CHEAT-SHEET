// https://practice.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1
string removeDuplicates(string str) {
    map<char, bool> exists;
    string ans="";

    for (char ch: str){
        if (exists[ch])
            continue;
        exists[ch] = true;
        ans += ch;
    }

    return ans;
}