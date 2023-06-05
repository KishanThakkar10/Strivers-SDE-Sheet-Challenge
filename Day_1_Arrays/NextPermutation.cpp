#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    int ptr= -1;
    for(int i = n-2; i>=0; i--){
        if(permutation[i]<permutation[i+1]){
            ptr = i ;
            break;
        }

    }

    if(ptr==-1){
        reverse(permutation.begin(), permutation.end());
        return permutation;
    }

    for(int i = n-1; i>ptr; i--){
        if(permutation[i]>permutation[ptr]){
            swap(permutation[i],permutation[ptr]);
            break;
        }

    }
    sort(permutation.begin() + ptr + 1 , permutation.end());

    return permutation;
}