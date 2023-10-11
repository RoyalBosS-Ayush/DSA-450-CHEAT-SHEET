// https://practice.geeksforgeeks.org/problems/minimum-swaps-for-bracket-balancing2704/1
int minimumNumberOfSwaps(string S){
    int open=0, closed=0, fault=0, count=0;
    
    for (char ch: S){
        if (ch == ']') {
            closed++;
            fault = closed - open;
        }
        else {
            open++;
            if (fault>0){
                count += fault;
                fault--;
            }
        }
    }

    return count;
}