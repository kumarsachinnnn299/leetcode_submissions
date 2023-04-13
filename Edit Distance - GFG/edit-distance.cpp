//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// https://www.youtube.com/watch?v=448gJKKKgew

//value in dp[0][j] represets how many moves required to convert empty string to h, ho, hor, hors, horse
//value in dp[i][0] represents how many moves are required to convert h,ho, hor, hors, horse to ""

class Solution {
  public:
    int editDistance(string word1, string word2) {
        // Code here
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
        

        return dp[word1.size()][word2.size()];
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends