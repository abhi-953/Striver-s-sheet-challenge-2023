#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int x,y;
        for(int i=0;i<intervals.size();i++){
            y=intervals[i][1];
            x=intervals[i][0];
            while(i<intervals.size()-1 && intervals[i+1][0]<=y){
                y=max(intervals[i+1][1],y);
                i++;
            }
            vector<int> t;
            t.push_back(x);
            t.push_back(y);
            ans.push_back(t);
        }
        return ans;
}
