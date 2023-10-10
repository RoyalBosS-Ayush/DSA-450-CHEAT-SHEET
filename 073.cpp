// https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1
string longestCommonPrefix (string arr[], int N)
{
    if (N == 1)
        return arr[0];

    int curr=0;
    string ans="";
    bool flag=true;

    while(flag){
        for (int i=1; i<N; i++){
            if (arr[i].size() == curr || arr[i][curr] != arr[i-1][curr]){
                flag=false;
                break;
            }
        }

        if (flag){
            ans += arr[0][curr];
            curr++;
        }
    }
    
    if (ans.size())
        return ans;
    return "-1";
}