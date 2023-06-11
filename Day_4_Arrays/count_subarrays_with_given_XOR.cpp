#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    int n= arr.size();
    int count =0 , ex;
    for(int i=0; i<n;i++){
        ex=arr[i];
        if(ex==x) count++;
        for(int j=i+1; j<n; j++){
            ex = ex ^ arr[j];
            if(ex==x) count++;
        }
    }
    return count;
}
