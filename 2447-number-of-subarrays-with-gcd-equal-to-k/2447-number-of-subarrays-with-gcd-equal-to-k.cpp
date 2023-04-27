//Brute force approach


class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int ans=0;
        int hcf=1;
        for(int i=0;i<nums.size();i++)
        {   
            
            hcf=nums[i];
            for(int j=i;j<nums.size();j++)
            {   if(nums[i]<k)break;
                hcf=__gcd(hcf,nums[j]);
                if(hcf<k)break;
                if(hcf==k)ans++;
            }
        }
        return ans;
    }
};