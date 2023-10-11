// https://practice.geeksforgeeks.org/problems/min-number-of-flips3210/1
int minFlips (string S)
{
    int ansIfOneOnOdd=0, ansIfOneOnEven=0;
    
    for (int i=0; i<S.size(); i++) {
        if (i&1){
            if (S[i] == '0')
                ansIfOneOnOdd++;
            else
                ansIfOneOnEven++;
        } else {
            if (S[i] == '0')
                ansIfOneOnEven++;
            else
                ansIfOneOnOdd++;
        }
    }
    
    return min(ansIfOneOnOdd, ansIfOneOnEven);
}