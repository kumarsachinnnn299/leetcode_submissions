// https://www.youtube.com/watch?v=J4YQL9fKOLc

class Solution {
public:
    
    int helper(string& s1, string &s2,int i,int j, vector<vector<int>>&dp)
    {
        if(i<0&&j>=0)
        {
            int ans=0;
            while(j>=0)ans+=s2[j--];
            return ans;
        }
        else if(i>=0&&j<0)
        {
            int ans=0;
            while(i>=0)ans+=s1[i--];
            return ans;
        }
        else if(i<0&&j<0)return 0;
         if(dp[i][j]!=-1)return dp[i][j];
         if(s1[i]==s2[j])return helper(s1,s2,i-1,j-1,dp);
        else{
            
            return dp[i][j]=min(s1[i]+helper(s1,s2,i-1,j,dp),s2[j]+helper(s1,s2,i,j-1,dp));
        }
    }
    
    int minimumDeleteSum(string s1, string s2) {
        
        vector<vector<int>>dp(s1.size()+1,vector<int>(s2.size()+1,-1));
        return helper(s1,s2,s1.size()-1,s2.size()-1,dp);
        
    }
    
};