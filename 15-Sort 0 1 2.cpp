#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int start=0, mid=0, end=n-1;

   while(mid<=end)
   {
      switch(arr[mid])
      {
         case 0: swap(arr[start++], arr[mid++]);
                 break;

         case 1: mid++;
                break;

         case 2: swap(arr[mid], arr[end--]);
      }
   }
}