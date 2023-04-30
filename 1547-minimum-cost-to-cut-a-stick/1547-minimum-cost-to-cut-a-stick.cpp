//Partition dp question
// https://www.youtube.com/watch?v=xwomavsC86c
//https://leetcode.com/problems/minimum-cost-to-cut-a-stick/discuss/3443409/C%2B%2B-Solution-oror-DP-oror-Recursion-greater-Memoization-greater-Tabulation

class Solution {
public:
    
    int helper(int  s,int e, vector<int>&cuts,vector<vector<int>>&dp)
    {
        if(s>e)return 0;
        if(dp[s][e]!=-1)return dp[s][e];
        int ans=INT_MAX;
        for(int i=s;i<=e;i++)
        {
            int temp=cuts[e+1]-cuts[s-1]+helper(s,i-1,cuts,dp)+helper(i+1,e,cuts,dp);
            ans=min(ans,temp);
        }
        return dp[s][e]=ans;
    }
    
    int minCost(int n, vector<int>& cuts) {
       int m=cuts.size();
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
         vector<vector<int>>dp(m+1,vector<int>(m+1,-1));
        
        sort(cuts.begin(),cuts.end());
        return helper(1,m,cuts,dp);
    }
};