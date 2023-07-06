#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int *x=arr;
   int z=0,p=0,t=0;
   for(int i=0;i<n;i++){
      if(*x==0){
         z++;
      }
      else if(*x==1){
         p++;
      }
      else{
         t++;
      }
      x++;
   }
   while(z!=0){
      *arr=0;
      arr++;
      z--;
   }
   while(p!=0){
      *arr=1;
      *arr++;
      p--;
   }
   while(t!=0){
      *arr=2;
      arr++;
      t--;
   }
}
