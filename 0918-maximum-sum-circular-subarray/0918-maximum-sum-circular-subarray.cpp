
// Kadanes algo pe thoda sa based

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total_sum=0,maxsum=INT_MIN,minsum=INT_MAX,currsum=0,currsum2=0;
        for(int i=0;i<nums.size();i++)
        {
            total_sum+=nums[i];
            currsum+=nums[i];
            currsum2+=nums[i];
            maxsum=max(maxsum,currsum);
             if(currsum<0)currsum=0;
            minsum=min(minsum,currsum2);
           
            if(currsum2>0)currsum2=0;
            
        }
        if(total_sum==minsum)return maxsum;
        return max(maxsum,total_sum-minsum);
    }
};