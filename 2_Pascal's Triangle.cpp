#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> v;
  vector<long long int> v2;
  v2.push_back(1);
  v.push_back(v2);
  int i=1;
  while(i<n){
    vector<long long int> v1;
    v1.push_back(1);
    for(int j=1;j<i;j++){
      v1.push_back(v[v.size()-1][j-1]+v[v.size()-1][j]);
    }
    v1.push_back(1);
    v.push_back(v1);
    i++;
  }
  return v;
}
