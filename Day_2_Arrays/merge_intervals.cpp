#include <bits/stdc++.h> 
/*

    arr[i][0] = start point of i'th interval
    arr[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &arr)
{
    sort(arr.begin() , arr.end());
    int n = arr.size();
    vector<vector<int>> ans;

    for(int i =0 ; i<n; i++){
        if(ans.empty() || arr[i][0]>ans.back()[1]){
            ans.push_back(arr[i]);
        }
        
        else{
            ans.back()[1] = max(ans.back()[1] , arr[i][1]);
        }

    }
    return ans;
}
