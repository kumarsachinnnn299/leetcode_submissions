//Not done

//Bit question

class Solution {
    private:
    unordered_map<vector<bool>,int>dp;
    int f(int op,vector<int>&nums,int n,vector<bool>&vis){
        if(dp.find(vis)!=dp.end())return dp[vis];
        int ans = 0;
        for(int i=0;i<n;i++){
            if(vis[i])continue;
            for(int j=i+1;j<n;j++){
                if(vis[j])continue;
                vis[i] = true;
                vis[j] = true;
                int score = op*(__gcd(nums[i],nums[j])) + f(op+1,nums,n,vis);
                ans = max(ans,score);
                vis[i] = false;
                vis[j] = false;
                //means vector itself is changing 
            }
        }
        return dp[vis] = ans;
    }
    public:
    int maxScore(vector<int>& nums) {
        int n = nums.size();
        vector<bool>vis(n,0);
        return f(1,nums,n,vis);
    }
};