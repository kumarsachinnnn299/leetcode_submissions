class Solution {
public:
    
    //Done
    
    int helper(int idx,string &s, vector<int>&time,vector<int>&dp)
    {
        if(idx>=s.size())return 0;
        if(dp[idx]!=-1)return dp[idx];
        if(idx>0&&s[idx]==s[idx-1]){
            if(time[idx]<time[idx-1])
            {
                swap(time[idx-1],time[idx]);
            }
            return dp[idx]=min(time[idx],time[idx-1])+helper(idx+1,s,time,dp);
        }
        else{
            return dp[idx]=helper(idx+1,s,time,dp);
        }
    }
    
    int minCost(string s, vector<int>& time) {
        
        vector<int>dp(s.size(),-1);
        return helper(0,s,time,dp);
        
    }
};