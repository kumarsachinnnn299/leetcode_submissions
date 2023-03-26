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
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         vector<vector<int>>ans,ans2;
        vector<bool>vis(nums.size());
        vector<int>arr;
        backtrack(ans,arr,nums,vis);
        set<vector<int>>st;
        for(auto i:ans)
        {
            st.insert(i);
        }
        for(auto i:st)ans2.push_back(i);
        return ans2;
    }
};