//Ye approach LCS ko use krke h

class Solution {
public:
    int minDistance(string text1, string text2) {
      vector<vector<int>>dp(text1.size()+1,vector<int>(text2.size()+1));
        int ans=INT_MAX;
        for(int i=1;i<=text1.size();i++)
        {
            for(int j=1;j<=text2.size();j++)
            {
                if(text1[i-1]==text2[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int temp=dp[text1.size()][text2.size()];
        return text1.size()+text2.size()-temp-temp;
    }
};