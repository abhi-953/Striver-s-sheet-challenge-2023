#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int k, int m)
{
    int x=min(k/2,m/2);
    int i,j;
    int n=0;
    int p,c;
    int flag;
    while(x!=0){
        i=n;
        j=n+1;
        p=mat[i][i];
        c=p;
        flag=0;
        
        while(i!=n || j!=n){
            if(i==k-n-1 && j==m-n-1)
            flag=1;
            p=mat[i][j];
            mat[i][j]=c;
            c=p;
            if(flag!=1){
                if(j==m-n-1){
                    i++;
                }
                else{
                    j++;
                }
            }
            else{
                if(j==n){
                    i--;
                }
                else{
                    j--;
                }
            }
            
            
        }
        mat[n][n]=c;
        x--;
        n++;
    }

}
