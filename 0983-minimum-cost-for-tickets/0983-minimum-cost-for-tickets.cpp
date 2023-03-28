
//Dp question
// https://www.youtube.com/watch?v=A-N1SXEOXr4
class Solution {
public:
    int mincostTickets(vector<int>& nums, vector<int>& costs) {
        int n=nums.size();
        vector<int>dp(n+31);
        int temp;
        for(int i=n-1;i>=0;i--)
        {
             temp=lower_bound(nums.begin(),nums.end(),nums[i]+1)-nums.begin();
            int opt1=dp[temp]+costs[0];
            
             temp=lower_bound(nums.begin(),nums.end(),nums[i]+7)-nums.begin();
            int opt2=dp[temp]+costs[1];
            
             temp=lower_bound(nums.begin(),nums.end(),nums[i]+30)-nums.begin();
            int opt3=dp[temp]+costs[2];
            dp[i]=min(opt1,min(opt2,opt3));
        }
        return dp[0];
    }
};