
// https://leetcode.com/problems/longest-non-decreasing-subarray-from-two-arrays/discuss/3739283/C%2B%2Boror-Brute-Force-Recursion-with-memoization
class Solution {
public:
    
    int helper(int idx,int prev, vector<vector<int>>&dp,vector<int>&nums1,vector<int>&nums2 )
    {  
        if(idx>=nums1.size())return 0;
        int ans=0;
        if(dp[idx][prev]!=-1)return dp[idx][prev];
        if(prev==0)
        {
            int nt=helper(idx+1,0,dp,nums1,nums2);
            int t1=1+helper(idx+1,1,dp,nums1,nums2);//1 for nums 1 as prev
            int t2=1+helper(idx+1,2,dp,nums1,nums2);//2 for nums2 as prev
            ans=max({t1,t2,nt});
        }
        else{
            if(prev==1)
            {
                if(nums1[idx]>=nums1[idx-1])
                {
                    ans=max(ans,1+helper(idx+1,1,dp,nums1,nums2));
                    
                }
                 if(nums2[idx]>=nums1[idx-1])
                {
                    ans=max(ans,1+helper(idx+1,2,dp,nums1,nums2));
                }
            }
            else {
                if(nums2[idx]>=nums2[idx-1])
                {
                    ans=max(ans,1+helper(idx+1,2,dp,nums1,nums2));
                    
                }
                 if(nums1[idx]>=nums2[idx-1])
                {
                    ans=max(ans,1+helper(idx+1,1,dp,nums1,nums2));
                }
            }
        }
        return dp[idx][prev]=ans;
        
    }
    
    int maxNonDecreasingLength(vector<int>& nums1, vector<int>& nums2) {
       vector<vector<int>>dp(nums1.size(),vector<int>(3,-1));
        return  helper(0,0,dp,nums1,nums2);
    }
};