// https://www.youtube.com/watch?v=XgRIr8CCCVk
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.size());
        int idx=nums.size()-1;
        int s=0,e=nums.size()-1;
        while(s<=e)
        {
            if(abs(nums[s])>abs(nums[e])){
                ans[idx]=nums[s]*nums[s];
                idx--;
                s++;
            }
            else{
                ans[idx]=(nums[e]*nums[e]);
                e--;
                idx--;
            }
        }
        return ans;
        
    }
};