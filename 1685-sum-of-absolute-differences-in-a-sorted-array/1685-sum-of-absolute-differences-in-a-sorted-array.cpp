// https://www.youtube.com/watch?v=Dy7KpWlrgNU

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int>sum(n);
        sum[0]=nums[0];     
        vector<int>ans(n);
        for(int i=1;i<nums.size();i++)sum[i]=nums[i]+sum[i-1];
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                int cr=n-i;
                ans[i]=sum[n-1]-(nums[i]*cr);
                
            }
            else if(i==n-1)
            {
                
                ans[i]=(nums[i]*n)-sum[i];
            }
            else{
                int cl=i;
                int cr=n-i-1;
                ans[i]=((nums[i]*cl)-sum[i])+(sum[n-1]-(nums[i]*cr)-sum[i-1]);
            }
        }
        return ans;
    }
};