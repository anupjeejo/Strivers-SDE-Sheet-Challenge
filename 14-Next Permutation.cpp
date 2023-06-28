#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int breakPoint = n-2;

    for( ;breakPoint>=0; breakPoint-- )
    {
        if(permutation[breakPoint] < permutation[breakPoint+1])
        {
            break;
        }
    }

    if(breakPoint < 0)
    {
        reverse(permutation.begin(), permutation.end());
    }
    else
    {
        int idx=0;
        for(idx=n-1; idx>breakPoint; idx--)
        {
            if(permutation[idx] > permutation[breakPoint])
            {
                break;
            }
        }
        swap(permutation[breakPoint], permutation[idx]);
        reverse(permutation.begin()+breakPoint+1, permutation.end());
    }

    return permutation;
}