// https://www.youtube.com/watch?v=6t82AO15Pgk

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<vector<int>>arr;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                arr.push_back({i+j,j,nums[i][j]});
            }
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)ans.push_back(arr[i][2]);
        return ans;
    }
};