//https://www.youtube.com/watch?v=sjS_TzEgxZA
//2 pointers

class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        
        int ans=0;
        int mod=1e9+7;
        sort(nums.begin(),nums.end());
        int l=0,r=nums.size()-1;
        
        vector<int>powers(nums.size(),1);
        for(int i=1;i<nums.size();i++)
        {
            powers[i]=(2*powers[i-1])%mod;
        }
        
        while(l<=r)
        {
            if(nums[l]+nums[r]<=target)
            {  
               
                ans=(ans+powers[r-l])%mod;
                l++;
            }
            else r--;
        }
        return ans;
            
    }
};