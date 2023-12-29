class Solution {
public:
    
    // https://www.youtube.com/watch?v=mBZEFR3LSNs
    
    int helper(int idx,int d,vector<int>&arr,vector<vector<int>>&dp)
    {
        if(d==1)
        {
            return *max_element(arr.begin()+idx,arr.end());
        }
        if(dp[idx][d]!=-1)return dp[idx][d];
        int res=INT_MAX,currd=INT_MIN;
        for(int j=idx;j<=arr.size()-d;j++)
        {
            currd=max(currd,arr[j]);
            res=min(res,currd+helper(j+1,d-1,arr,dp));
        }
        return dp[idx][d]= res;
    }
    
    int minDifficulty(vector<int>& arr, int d) {
        vector<vector<int>>dp(301,vector<int>(11,-1));
        if(arr.size()<d)return -1;
        return helper(0,d,arr,dp);
    }
};