#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	int majority_num = floor(n/2);
	unordered_map<int, int> mpp;
	for(int i = 0; i<n ; i++){
		mpp[arr[i]]++;
	}

	for(int i = 0; i<n ; i++){
		if(mpp[arr[i]]>majority_num) return arr[i];
	}
	return -1;

}
