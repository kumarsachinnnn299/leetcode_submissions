class Solution {
public:
    int countSubstrings(string s) {
     int ans=0,n=s.size();
        bool dp[n][n];
        for(int gap=0;gap<s.size();gap++)
        {
            for(int i=0,j=gap;j<s.size();i++,j++)
            {
                if(gap==0){
                    dp[i][j]=true;
                }
                else if(gap==1)
                {
                    dp[i][j]=(s[i]==s[j]);
                }
                else{
                    dp[i][j]=(s[i]==s[j])&&dp[i+1][j-1];
                }
                if(dp[i][j])ans++;
            }
        }
        return ans;
    }
};