// Using combinatorics

#include <bits/stdc++.h> 
 
int ncr(int n, int r){
	int ans = 1;
	for(int i = 0; i<r ; i++){
		ans = ans * (n-i);
		ans = ans / (i+1);
	}
	return ans;
}

int uniquePaths(int m, int n){
	
	int paths = ncr(m+n-2 , m-1);
	return paths;

}
