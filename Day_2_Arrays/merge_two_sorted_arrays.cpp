#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
  vector<int> arr3 = { arr1.begin(), arr1.begin() + m };
	int i = 0, j=0, index = 0;
	while(i<m && j<n){
		if(arr3[i]<=arr2[j]){
			arr1[index] = arr3[i];
			i++;
			index++;
		}
		else{
			arr1[index] = arr2[j];
			j++;
			index++;
		}
	}
	while(i<m){
		arr1[index] = arr3[i];
		i++;
		index++;
	}
	while(j<n){
		arr1[index] = arr2[j];
		j++;
		index++;
	}
	return arr1;
}
