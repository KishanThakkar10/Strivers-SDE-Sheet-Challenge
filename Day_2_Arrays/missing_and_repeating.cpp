#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &a, int n)
{
	int hash[n+1] = {0};

	for(int i=0; i<n ; i++){
		hash[a[i]]++;
	}

	int rep , mis;
	for(int i=1; i<n+1 ; i++){
		if(hash[i]==0) mis = i;
		else if(hash[i]==2) rep = i; 
	}
	return {mis,rep};
}
