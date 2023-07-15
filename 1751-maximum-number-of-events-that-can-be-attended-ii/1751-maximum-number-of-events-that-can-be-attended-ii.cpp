class Solution {
public:
    
    int helper(int idx,vector<vector<int>>& events,int k,int pEnd,vector<vector<int>>&dp)
    {
        if(idx==events.size()||k==0)return 0;
        if(events[idx][0]<=pEnd)return helper(idx+1,events,k,pEnd,dp);
         if(dp[idx][k]!=-1)return dp[idx][k];
        int taken=events[idx][2]+helper(idx+1,events,k-1,events[idx][1],dp);
        int nt=helper(idx+1,events,k,pEnd,dp);
        return dp[idx][k]=max(taken,nt);
        
        
        
        
    }
    
    int maxValue(vector<vector<int>>& events, int k) {
        sort(events.begin(),events.end());
        vector<vector<int>>dp(events.size(),vector<int>(k+1,-1));
        return helper(0,events,k,0,dp);
    }
};