class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
     
        int ans=0;
        for(auto &i:nums)sort(i.begin(),i.end());
        for(int j=nums[0].size()-1;j>=0;j--)
        {   int temp=INT_MIN;
            for(int i=0;i<nums.size();i++)
            {
                temp=max(temp,nums[i][j]);
            }
            ans+=temp;
        }
       
      
        return ans;
    }
};