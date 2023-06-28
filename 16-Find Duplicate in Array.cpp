#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n)
{
    sort( arr.begin() , arr.end() );
    int rep;
    int beg = 0 , end = n - 1 , mid;
    int ans;

    while( beg <= end )
    {
        mid = ( beg + end ) / 2;
        if( arr[mid] > mid )
        {
            rep = arr[mid];
            beg = mid + 1;
        } 
        else
        {
            rep = arr[mid];
            end = mid - 1;
        }
    }
    return rep;
}
