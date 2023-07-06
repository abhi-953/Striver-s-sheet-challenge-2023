#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	m--;n--;
	int i;	
	for(i=m+n+1;i>=0 && m>=0 && n>=0;i--){
		if(arr1[m]>arr2[n]){
			arr1[i]=arr1[m];
			m--;
		}
		else{
			arr1[i]=arr2[n];
			n--;
		}
	}
	while(n>=0){
		arr1[i]=arr2[n];
		n--;
		i--;
	}
	return arr1;
}
