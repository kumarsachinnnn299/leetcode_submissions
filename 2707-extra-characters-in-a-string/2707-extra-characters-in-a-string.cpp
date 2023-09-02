// https://www.youtube.com/watch?v=eDm3DHBgECc


class Solution {
public:
    
    int helper(int idx,vector<string>&arr,vector<int>&dp,string &s)
    {
        if(idx==s.size())return 0;
        if(dp[idx]!=-1)return dp[idx];
        
        int ans=s.size();//suppose at start no substring is found so extra caharcters left will be complete string
        
        for(auto word:arr)
        {
            int len=word.size();
            if(idx+len<=s.size()&&s.substr(idx,len)==word)
            {
                int extra=helper(idx+len,arr,dp,s);
                ans=min(ans,extra);
            }
        }
        
        int nt=1+helper(idx+1,arr,dp,s);
        ans=min(ans,nt);
        return dp[idx]=ans;
        
        
    }
    
    int minExtraChar(string s, vector<string>& arr) {
        int n=s.size();
        vector<int>dp(n,-1);
        return helper(0,arr,dp,s);
    }
};