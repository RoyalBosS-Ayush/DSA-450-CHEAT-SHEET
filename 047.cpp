// https://practice.geeksforgeeks.org/problems/reverse-a-string/1
string reverseWord(string str)
{
    int l = 0, r = str.size() - 1;

    while (l<r)
        swap(str[l++], str[r--]);

    return str;
}