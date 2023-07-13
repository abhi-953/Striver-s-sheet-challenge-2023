bool searchMatrix(vector<vector<int>>& mat, int target) {
        int low=0,high=mat.size()*mat[0].size()-1,mid,m,n,x=mat[0].size();
        while(low<=high){
            mid=(low+high)/2;
            //cout<<mid;
            n=mid/x;
            m=mid%x;
            if(mat[n][m]>target){
                high=mid-1;
            }
            else if(mat[n][m]<target){
                low=mid+1;
            }
            else{
                return true;
            }
        }
        return false;
}
