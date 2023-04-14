//Simple LCS ka hi extension h bas 
//Reverse krdo given string ko to wo palindrome k liye kaam kr dega


//Striver : https://www.youtube.com/watch?v=6i_T5kkfv4A

class Solution {
public:
    int longestPalindromeSubseq(string text1) {
        int n=text1.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1));
                
        for(int i=1;i<=n;i++)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(text1[i-1]==text1[j])dp[i][n-j]=dp[i-1][n-j-1]+1;
                else{
                    
                    dp[i][n-j]=max(dp[i][n-j-1],dp[i-1][n-j]);
                }
            }
        }
        return dp[text1.size()][text1.size()];
    }
};