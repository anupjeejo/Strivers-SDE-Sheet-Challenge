#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	int voteCount=0, element, finalCount=0;

	for(int i=0; i<n; i++)
	{
		if(voteCount == 0)
		{
			element = arr[i];
		}

		if( element == arr[i])
		{
			voteCount++;
		}
		else
		{
			voteCount--;
		}
	}

	for(int i=0; i<n; i++)
	{
		if(arr[i] == element)
			finalCount++;
	}


	return finalCount > n/2 ? element : -1;
}