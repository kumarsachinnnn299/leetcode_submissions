//Kadanes algo

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN,currsum=0;
        for(auto i:nums)
        {
            currsum+=i;
            maxsum=max(maxsum,currsum);
            if(currsum<0)currsum=0;
        }
        return maxsum;
    }
};