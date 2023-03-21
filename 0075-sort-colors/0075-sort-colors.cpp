//Sachin singh question

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s=0,e=nums.size()-1,mid=0;
        while(mid<=e)
        {
            if(nums[mid]==0)
            {
                swap(nums[s++],nums[mid++]);
            }
            else if(nums[mid]==1)mid++;
            else if(nums[mid]==2)swap(nums[mid],nums[e--]);
        }
    }
};