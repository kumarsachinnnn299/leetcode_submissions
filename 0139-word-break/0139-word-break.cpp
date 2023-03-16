class Solution {
public:
    int dp[301];
    
    int helper(string s,int start,set<string>&st)
    {   if(start==s.size())return 1;
        if(dp[start]!=-1)return dp[start];
        string temp="";
        for(int i=start;i<s.size();i++)
        {
            temp+=s[i];
            if(st.find(temp)!=st.end()&&helper(s,i+1,st))return dp[start]= 1;
        }
        return dp[start]=0;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string>st;
        memset(dp,-1,sizeof dp);
        for(auto i:wordDict)st.insert(i);
        return helper(s,0,st);
    }
};