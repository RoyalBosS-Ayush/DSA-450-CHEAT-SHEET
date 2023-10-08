// https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1
bool ispar(string x)
{
    stack<char> st;
    
    for (int i=0; i<x.size(); i++){
        if (x[i] == '{' || x[i] == '(' || x[i] == '[')
            st.push(x[i]);
        else {
            if (st.empty())
                return false;
            else {
                char top = st.top();
                if ((top == '{' && x[i] == '}') || (top == '(' && x[i] == ')') || (top == '[' && x[i] == ']'))
                    st.pop();
                else
                    return false;
            }
        }
    }
    
    return st.empty();
}