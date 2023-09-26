// https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1
bool isPalindrome(int num){
    int temp=num, reverse=0;
    while(temp){
        reverse = reverse*10 + temp%10;
        temp /= 10;
    }
    return num == reverse;
}
int PalinArray(int a[], int n)
{
    for (int i=0; i<n; i++)
        if (!isPalindrome(a[i]))
            return 0;
    
    return 1;
}