// https://practice.geeksforgeeks.org/problems/palindrome-string0817/1
int isPalindrome(string S)
{
    int l=0, r=S.size()-1;
    
    while(l<r)
        if (S[l++] != S[r--])
            return 0;
            
    return 1;
}