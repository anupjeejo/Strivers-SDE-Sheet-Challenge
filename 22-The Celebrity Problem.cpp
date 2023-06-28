#include <bits/stdc++.h> 
/*
	This is signature of helper function 'knows'.
	You should not implement it, or speculate about its implementation.

	bool knows(int A, int B); 
	Function 'knows(A, B)' will returns "true" if the person having
	id 'A' know the person having id 'B' in the party, "false" otherwise.
*/

int findCelebrity(int n) 
{
	stack<int> st;

	for(int i=0; i<n; i++)
	{
		st.push(i);
	}

	while(st.size() > 1)
	{
		int candidate1 = st.top();
		st.pop();
		int candidate2 = st.top();
		st.pop();

		if(knows(candidate1, candidate2))
			st.push(candidate2);
		else
			st.push(candidate1);
	}

	int candidate = st.top();
	st.pop();

	for(int i=0; i<n; i++)
	{
		if(candidate != i)
		{
			if(knows(candidate, i) || !knows(i, candidate))
			{
				return -1;
			}
		}
	}

	return candidate;
}