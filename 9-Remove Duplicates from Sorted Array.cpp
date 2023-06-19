#include <bits/stdc++.h>

int removeDuplicates(vector<int> &arr, int n) {
	// set<int> st;

	// for(auto it : arr)
	// {
	// 	st.insert(it);
	// }

	// return st.size();
	int idx = 1;

	for(int i = 1; i<n; i++)
	{
		if(arr[i-1] != arr[i])
			arr[idx++] = arr[i];
	}

	return idx;
}