// https://www.youtube.com/watch?v=_iIK7Gu7MNo&t=509s

class Solution {
public:
    
    int dp[301];
    
    bool helper(int idx,string s,unordered_set<string>&st)
    {
        if(idx==s.size())return 1;
        if(dp[idx]!=-1)return dp[idx];
        string temp="";
        for(int j=idx;j<s.size();j++)
        {
            temp+=s[j];
            if(st.find(temp)!=st.end())
            {
                if(helper(j+1,s,st))return dp[idx]= true;
            }
        }
        return dp[idx]= false;
    }
    
    
    bool wordBreak(string s, vector<string>& arr) {
        
        memset(dp,-1,sizeof dp);
        unordered_set<string>st;
        for(auto i:arr)st.insert(i);
        return helper(0,s,st);
        
    }
    
};