class Solution {
public:
    int jump(vector<int>& nums) {
     int ans=0,curreach=0,maxreach=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(i+nums[i]>maxreach)
            {
                maxreach=i+nums[i];
            }
            if(curreach==i)
            {
                curreach=maxreach;
                ans++;
            }
        }
        return ans;
    }
};