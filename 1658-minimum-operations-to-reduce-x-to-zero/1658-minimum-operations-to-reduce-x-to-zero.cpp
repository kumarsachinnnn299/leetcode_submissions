// https://www.youtube.com/watch?v=D2s4wN4MFnQ

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=0;
        int n=nums.size();
        for(auto i:nums)sum+=i;
        sum-=x;
        if(sum<0)return -1;
        if(sum==0)return n;
        int s=0,e=0;
        int csum=0;
        int ans=INT_MAX;
        while(e<n)
        {
            csum+=nums[e];
            e++;
            while(csum>sum&&s<n)
            {
                csum-=nums[s];
                s++;
                
            }
            if(csum==sum)
            {
                ans=min(ans,n-e+s);
            }
        }
        if(ans==INT_MAX)return -1;
        return ans;
    }
};