class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        while(start<end)
        {
            while(start<end&&nums[start]%2==0)start++;
            while(start<end&&nums[end]%2)end--;
            if(start<end){
                swap(nums[start++],nums[end--]);
            }
        }
        return nums;
    }
};