// https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1
vector<int> factorial(int N){
    vector<int> ans;
    ans.push_back(1);
    
    for (int i=2; i<=N; i++) {
        int carry = 0;

        for (int j=0; j<ans.size(); j++) {
            int num = ans[j] * i + carry;
            ans[j] = num % 10;
            carry = num / 10;
        }

        while(carry){
            ans.push_back(carry % 10);
            carry /= 10;
        }
    }
    
    reverse(ans.begin(), ans.end());

    return ans;
}