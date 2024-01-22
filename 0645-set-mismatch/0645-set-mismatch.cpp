class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
         sum+=nums[i];
            if(i>0&&nums[i]!=nums[nums.size()-1])nums.push_back(nums[i]);
            else if(i==0) nums.push_back(nums[i]);
        }
        
        int xorv=0;
        for(auto i:nums)xorv^=i;
        int repeating=((n*(n+1))/2)-sum+xorv;
        return {xorv,repeating};
        
    }
};