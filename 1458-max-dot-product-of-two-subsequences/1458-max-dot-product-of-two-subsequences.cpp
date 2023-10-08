//Extended version of LIS
// https://www.youtube.com/watch?v=9IwRPijqVA4
class Solution {
public:
    
    int dp[501][501][3];
    int helper(int i,int j,vector<int>&arr1, vector<int>&arr2,int l)
    {
        if(i>=arr1.size()||j>=arr2.size())
        {
            if(l==1)return 0;
            else return -1;
        }
        
        if(dp[i][j][l]!=-1)return dp[i][j][l];
        
        int t1=arr1[i]*arr2[j]+helper(i+1,j+1,arr1,arr2,1);
        int t2=helper(i+1,j,arr1,arr2,l);
        int t3=helper(i,j+1,arr1,arr2,l);
        
        return dp[i][j][l]=max({t1,t2,t3});
        
    }
    
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        memset(dp,-1,sizeof(dp));
        int ans=helper(0,0,nums1,nums2,0);
        if(ans==-1)
        {
            sort(nums1.begin(),nums1.end());
            sort(nums1.begin(),nums1.end());
            return max({nums1[0]*nums2.back(),nums2[0]*nums1.back()});
        }
        return ans;
    }
};