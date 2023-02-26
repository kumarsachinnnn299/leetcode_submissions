// https://www.youtube.com/watch?v=448gJKKKgew

class Solution {
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>>dp(word1.size()+1,vector<int>(word2.size()+1));
        for(int i=0;i<=word2.size();i++)dp[0][i]=i;
        for(int i=0;i<=word1.size();i++)dp[i][0]=i;
        for(int i=1;i<=word1.size();i++)
        {
            for(int j=1;j<=word2.size();j++)
            {
               if(word1[i-1]==word2[j-1])dp[i][j]=dp[i-1][j-1];
               else dp[i][j]=min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]))+1;
                
                
            }
        }
        
//           for(int i=0;i<=word1.size();i++)
//         {
//             for(int j=0;j<=word2.size();j++)
//             {
//              cout<<dp[i][j]<<' ';
                
                
//             }
//               cout<<endl;
//         }
        
        // cout<<dp[word1.size()][word2.size()];
        return dp[word1.size()][word2.size()];
    }
};