// https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1
string longestPalin (string S) {
    int n=S.size(), len=0, s=0, l, r;
    
    for(int i=0; i<n; i++){
        l=i;
        r=i;
        
        while(l>=0 && r<n && S[l]==S[r]){
            if (len<r-l+1){
                len = r-l+1;
                s = l;
            }
            l--;
            r++;
        }

        l=i;
        r=i+1;
        while(l>=0 && r<n && S[l]==S[r]){
            if (len<r-l+1){
                len = r-l+1;
                s = l;
            }
            l--;
            r++;
        }
    }
    
    return S.substr(s, len);
}