#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	unordered_map<int,int> r;
	unordered_map<int,int> c;
	for(int i=0;i<matrix.size();i++){
		for(int j=0;j<matrix[i].size();j++){
			if(matrix[i][j]==0){
				r[i]=1;
				c[j]=1;
			}
		}
	}
	for(int i=0;i<matrix.size();i++){
		for(int j=0;j<matrix[i].size();j++){
			if(r.find(i)!=r.end() || c.find(j)!=c.end()){
				matrix[i][j]=0;
			}
		}
	}
}
