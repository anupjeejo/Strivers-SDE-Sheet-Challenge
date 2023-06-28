#include <bits/stdc++.h> 

vector<int> nextGreater(vector<int> &arr, int n) {
    vector<int> result(n, -1);
    stack<int> st;

    st.push(0);

    for(int i=1; i<n; i++)
    {
        if(arr[st.top()] > arr[i])
        {
            st.push(i);
        }
        else
        {
            while(!st.empty() && arr[st.top()] < arr[i])
            {
                result[st.top()] = arr[i];
                st.pop();
            }
            st.push(i);
        }
    }

    return result;
}