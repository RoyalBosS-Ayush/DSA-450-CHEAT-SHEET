// https://practice.geeksforgeeks.org/problems/decode-the-pattern1138/1
string lookandsay(int n) {
    if (n == 0) return "";
    if (n == 1) return "1";

    string ans="1";
    for (int i=1; i<n; i++){
        string temp="";
        for (int j=0; j<ans.size(); j++){
            int count=1;
            while(j < ans.size()-1 && ans[j] == ans[j+1]){
                count++;
                j++;
            }
            temp += to_string(count) + ans[j];
        }
        ans = temp;
    }
    return ans;
}