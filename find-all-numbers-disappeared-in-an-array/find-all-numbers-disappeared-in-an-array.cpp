class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>arr(nums.size()+1),ans;
        for(auto i:nums)arr[i]=1;
        for(int i=1;i<arr.size();i++)if(arr[i]==0)ans.push_back(i);
        return ans;
    }
};