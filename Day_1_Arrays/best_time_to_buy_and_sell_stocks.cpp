#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int n = prices.size();
    int profit = 0;
    int diff = 0;

    for(int s=0;s<n; s++){
        for(int e=s; e<n; e++){
            diff = prices[e]-prices[s];
            if (diff>profit) profit = diff;
        }
    }
    return profit;
}
