class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        bool dp[n][n];
        int st,e;
        for(int gap=0;gap<n;gap++)
        {
            for(int i=0,j=gap;j<n;j++,i++)
            {
                if(gap==0)dp[i][j]=true;
                else if(gap==1)
                {
                    dp[i][j]=(s[i]==s[j]);
                }
                else{
                    dp[i][j]=((s[i]==s[j])&&dp[i+1][j-1]);
                }
                if(dp[i][j])
                {
                    st=i;
                    e=j;
                }
            }
        }
        string ans="";
        for(int i=st;i<=e;i++)ans+=s[i];
        return ans;
    }
};