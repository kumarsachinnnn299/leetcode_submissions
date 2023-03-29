
// https://www.youtube.com/watch?v=jhfqrJyT3SI
//dp

class Solution {
public:
    
    int helper(vector<int>&arr,vector<vector<int>>&dp,int idx,int time)
    {
        if(idx==arr.size())return 0;
        if(dp[idx][time]!=-1)return dp[idx][time];
        int opt1=time*(arr[idx])+helper(arr,dp,idx+1,time+1);;
        int opt2=helper(arr,dp,idx+1,time);
        return dp[idx][time]=max(opt1,opt2);
    }
    
    int maxSatisfaction(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>dp(arr.size()+1,vector<int>(arr.size()+1,-1));
        return helper(arr,dp,0,1);
    }
};