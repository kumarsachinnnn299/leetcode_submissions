class Solution {
    
public:
    
    long long helper(vector<long long>&dp,vector<vector<int>>&arr,int cidx)
    {
        if(cidx>=arr.size())return 0;
        if(dp[cidx]!=-1)return dp[cidx];
        long long taken=arr[cidx][0]+helper(dp,arr,cidx+arr[cidx][1]+1);
        long long nottaken=helper(dp,arr,cidx+1);
        return dp[cidx]=max(taken,nottaken);
    }
    
    long long mostPoints(vector<vector<int>>& questions) {
       vector<long long>dp(questions.size(),-1);
        long long ans=0;
        ans=helper(dp,questions,0);
        return ans;
    }
};