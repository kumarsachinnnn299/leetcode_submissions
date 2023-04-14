//Simple LCS ka hi extension h bas 
//Reverse krdo given string ko to wo palindrome k liye kaam kr dega


//Striver : https://www.youtube.com/watch?v=6i_T5kkfv4A

class Solution {
public:
    int longestPalindromeSubseq(string text1) {
        string text2=text1;
        reverse(text2.begin(),text2.end());
        vector<vector<int>>dp(text1.size()+1,vector<int>(text1.size()+1));
        
        for(int i=1;i<=text1.size();i++)
        {
            for(int j=1;j<=text1.size();j++)
            {
                if(text1[i-1]==text2[j-1])dp[i][j]=dp[i-1][j-1]+1;
                else{
                    
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        return dp[text1.size()][text1.size()];
    }
};