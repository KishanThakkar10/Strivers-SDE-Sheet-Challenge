#include <bits/stdc++.h>

int findDuplicate(vector<int> &a, int n){
	int slow = a[0],fast = a[0];
	do{
		slow = a[slow];
		fast = a[a[fast]];

	}while(slow!=fast);

	fast = a[0];

	while(slow!=fast){
		slow = a[slow];
		fast = a[fast];
	}

	return slow;

}
