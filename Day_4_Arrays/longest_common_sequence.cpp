#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    sort(arr.begin(), arr.end());
    int lcs=1,count=1 , num=arr[0];
    for(int i=1; i<n ; i++){
        if(arr[i] == num) continue;
        else if(arr[i] == num+1){
            count++;
            if(count>lcs) lcs = count;
            num=arr[i];
        }
        else{
            num=arr[i];
            count=1;
        }
    
    }
    if(count>lcs) lcs = count;
    return lcs;
}
