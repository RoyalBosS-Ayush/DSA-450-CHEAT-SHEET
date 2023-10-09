// https://practice.geeksforgeeks.org/problems/count-the-reversals/0
int countRev (string s)
{
    if (s.size()&1)
        return -1;
        
    stack<char> st;
    int ans=0;
    
    for (char ch: s){
        if (ch == '{')
            st.push(ch);
        else if (!st.empty() && st.top() == '{')
            st.pop();
        else {
            st.push('{');
            ans++;
        }
    }
    
    return ans + st.size()/2;
}