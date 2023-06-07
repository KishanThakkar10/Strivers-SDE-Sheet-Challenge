#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int n = prices.size();
    int profit = 0,diff = 0, min = prices[0];

    for(int i=0;i<n; i++){
            if(min>prices[i]) min = prices[i];
            diff = prices[i]-min;
            if (diff>profit) profit = diff;
    }
    return profit;
