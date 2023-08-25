class Solution {
public:
    
    bool helper(int i,int j,int k,vector<vector<int>>&dp,string&s1,string &s2,string &s3)
    {
        if(i==s1.size()&&j==s2.size()&&k==s3.size())return true;
        if(dp[i][j]!=-1)return dp[i][j];
        bool f1=false, f2=false;
        if(i<s1.size())
        {
            if(s1[i]==s3[k])
            {
                f1=helper(i+1,j,k+1,dp,s1,s2,s3);
            }
        }
        if(j<s2.size())
        {
            if(s2[j]==s3[k])
            {
                f2=helper(i,j+1,k+1,dp,s1,s2,s3);
            }
        }
        return dp[i][j]=f1||f2;
    }
    
    bool isInterleave(string s1, string s2, string s3) {
        int n1=s1.size(),n2=s2.size();
        vector<vector<int>>dp(n1+1,vector<int>(n2+1,-1));
        return helper(0,0,0,dp,s1,s2,s3);
    }
};