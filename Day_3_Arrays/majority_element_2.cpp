#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    int n=arr.size();
    vector<int> ans;
   	int majority_num = floor(n/3);
	map<int, int> mpp;
	for(int i = 0; i<n ; i++){
		mpp[arr[i]]++;
	}

	for(auto it: mpp){
		if(it.second>majority_num) ans.push_back(it.first);
	}
	return ans;

}
