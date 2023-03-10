class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        if(n==2)return max(nums[0],nums[1]);
        long long max1=LONG_MIN,max2=LONG_MIN,max3=LONG_MIN;
        for(auto i:nums)
        {
            if(i>max1)
            {
                max3=max2;
                max2=max1;
                max1=i;
            }
            else if(i>max2&i!=max1)
            {
                max3=max2;
                max2=i;
            }
            else if(i>max3&&i!=max2&&i!=max1)
            {
                max3=i;
            }
        }
        
        if(max2==LONG_MIN||max3==LONG_MIN)return max1;
        return max3;
    }
};