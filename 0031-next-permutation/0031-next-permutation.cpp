// https://www.youtube.com/watch?v=-h1FHkDxpKs&list=PLjeQ9Mb66hM3hgJfIvc32sTRQOpZ2SXxC&index=5

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int n=nums.size()-2;
        int i;
        for( i=n;i>=0;i--)
        {
            if(nums[i]<nums[i+1])break;
            
        }
        
        if(i<0)
            {
                sort(nums.begin(),nums.end());
                return;
            }
        
        for(int j=nums.size()-1;j>i;j--)
        {
            if(nums[j]>nums[i])
            {
                swap(nums[i],nums[j]);
                sort(nums.begin()+i+1,nums.end());
                break;
            }
        }
        
        
    }
};