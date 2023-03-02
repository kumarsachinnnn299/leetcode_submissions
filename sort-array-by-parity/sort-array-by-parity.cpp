class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        if(nums.size()==1)return nums;
        int s=0,e=nums.size()-1;
        while(s<e)
        {
            while(nums[s]%2==0&&s<e)
            {
                
                s++;
                
            }
            while(nums[e]%2!=0&&e>s)
            {
                
                e--;
                
            }
            if(s<e)swap(nums[s],nums[e]);
        }
        return nums;
        
    }
};