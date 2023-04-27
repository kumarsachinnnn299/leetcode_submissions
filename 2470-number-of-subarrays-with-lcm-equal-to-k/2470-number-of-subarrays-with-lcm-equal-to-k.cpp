//Similar to number of subarrays with gcd k

class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
         int ans=0;
        int lcM;
        for(int i=0;i<nums.size();i++)
        {   
            
            lcM=nums[i];
            for(int j=i;j<nums.size();j++)
            {   
                lcM=lcm(lcM,nums[j]);
                if(lcM>k)break;
                if(lcM==k)ans++;
            }
        }
        return ans;
    }
};