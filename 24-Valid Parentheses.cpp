bool isValidParenthesis(string expression)
{
    stack<char> st;
    int n = expression.size();

    for(int i=0; i<n; i++)
    {
        if (expression[i] == '{' 
            || expression[i] == '[' 
            || expression[i] == '(')
            st.push(expression[i]);
        else{ 
            if (st.empty() 
                || (st.top() == '(' && expression[i] != ')') 
                || (st.top() == '[' && expression[i] != ']') 
                || (st.top() == '{' && expression[i] != '}'))
                return false;
            st.pop();
        }    
    }

    return st.empty();
}