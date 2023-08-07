// treating as single sorted matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        
        int r=nums.size(),c=nums[0].size();
        
        int s=0,e=(r*c)-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid/c][mid%c]==target)return true;
            else if(nums[mid/c][mid%c]>target)e=mid-1;
            else s=mid+1;
        }
        return false;
        
    }
};