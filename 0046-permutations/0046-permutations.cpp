// https://www.youtube.com/watch?v=R3Sm9V2OSCo


class Solution {
public:
    
    void backtrack(vector<vector<int>>&ans, vector<int>&arr, vector<int>nums, vector<bool>vis)
    {
        if(arr.size()==nums.size()){
            ans.push_back(arr);
        return;
            }
        
        for(int i=0;i<nums.size();i++)
        {
            if(vis[i]==false){
                vis[i]=true;
                arr.push_back(nums[i]);
                backtrack(ans,arr,nums,vis);
                arr.pop_back();
                vis[i]=false;
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<bool>vis(nums.size());
        vector<int>arr;
        backtrack(ans,arr,nums,vis);
        return ans;
    }
};