#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int ma=prices[prices.size()-1];
    int ans=0;
    for(int i=prices.size()-2;i>=0;i--){
        ans=max(ans,ma-prices[i]);
        ma=max(ma,prices[i]);
    }
    return ans;
}
