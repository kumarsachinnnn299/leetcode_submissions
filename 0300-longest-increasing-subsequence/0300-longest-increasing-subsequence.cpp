class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>arr;
        arr.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]>arr[arr.size()-1])arr.push_back(nums[i]);
            else{
                int idx=lower_bound(arr.begin(),arr.end(),nums[i])-arr.begin();
                arr[idx]=nums[i];
            }
        }
        return arr.size();
    }
};