// https://www.youtube.com/watch?v=NFv0qii2jpY&t=455s
// https://www.youtube.com/watch?v=014NzNPJNbY

//Recursion question of beginning level
//make all subsets type question

class Solution {
public:
    
    int dfs(vector<int>&included,vector<int>&nums,int k,int idx)
    {
        if(idx==nums.size())return 1;
        int taken=0;
        if(nums[idx]-k<0||included[nums[idx]-k]==0)
        {
            included[nums[idx]]++;
            taken=dfs(included,nums,k,idx+1);
            included[nums[idx]]--;
            
        }
        long long nottaken=dfs(included,nums,k,idx+1);
        
        return taken+nottaken;
    }
    
    int beautifulSubsets(vector<int>& nums, int k) {
        vector<int>included(1005);
        sort(nums.begin(),nums.end());
        return dfs(included,nums,k,0)-1;
    }
};