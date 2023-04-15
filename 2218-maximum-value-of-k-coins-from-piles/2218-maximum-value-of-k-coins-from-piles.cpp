
//based on 0/1 knapsack dp
// https://www.youtube.com/watch?v=zOG-NwqPtB0
//not understood

class Solution {
public:
    
    int helper(vector<vector<int>>&dp,vector<vector<int>>&piles,int start, int k)
    {
        if(start>=piles.size()||k<=0)return 0;
        if(dp[start][k]!=-1)return dp[start][k];
        int fur=helper(dp,piles,start+1,k);
        int cur=0;
        for(int i=0;i<piles[start].size()&&i<k;i++)
        {
            cur+=piles[start][i];
            fur=max(fur,cur+helper(dp,piles,start+1,k-i-1));
        }
        return  dp[start][k]=fur;
    }
    
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
     vector<vector<int>>dp(piles.size(),vector<int>(k+1,-1));
    
    return helper(dp,piles,0,k);
    }
};