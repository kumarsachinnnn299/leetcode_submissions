//LCS h same
// https://www.youtube.com/watch?v=m052wX6wl54
class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>dp(nums1.size()+1,vector<int>(nums2.size()+1));
        for(int i=1;i<=nums1.size();i++)
        {
            for(int j=1;j<=nums2.size();j++)
            {
                if(nums1[i-1]==nums2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        return dp[nums1.size()][nums2.size()];
    }
};