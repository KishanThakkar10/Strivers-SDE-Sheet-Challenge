#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  int n= arr.size();
  int ans =0 , sum, len;
  for(int i=0; i<n;i++){
    len=1;
    sum=arr[i];
    if(sum==0) ans = max(ans,len);
    for(int j=i+1; j<n; j++){
      sum = sum+arr[j];
      len++;
      if (sum==0) {
        ans = max(ans,len);
      }
    }
  }
  return ans;

}
