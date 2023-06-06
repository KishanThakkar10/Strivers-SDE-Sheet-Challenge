#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long int sum = 0;
    int s=0, e=0;

    for(s=0; s<n; s++){
        long long int sum_temp = 0;
        for(e=s; e<n; e++){
            sum_temp += arr[e];
            
            if(sum<sum_temp){
                sum = sum_temp;
            }
        }
    }
    return sum;
}