// https://practice.geeksforgeeks.org/problems/reverse-a-string/1
string reverseWord(string str)
{
    int l = 0, r = str.size() - 1;
    while (l<r){
        char temp = str[l];
        str[l] = str[r];
        str[r] = temp;
        l++;
        r--;
    }
    return str;
}