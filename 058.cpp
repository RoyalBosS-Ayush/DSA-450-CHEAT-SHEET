// https://practice.geeksforgeeks.org/problems/split-the-binary-string-into-substrings-with-equal-number-of-0s-and-1s/1
int maxSubStr(string str){
    int n=str.size(), count=0, balance=0;
    
    for (int i=0; i<n; i++){
        if (str[i] == '0')
            balance--;
        else
            balance++;

        if (balance == 0)
            count++;
    }
    
    if (balance)
        return -1;
    return count;
}