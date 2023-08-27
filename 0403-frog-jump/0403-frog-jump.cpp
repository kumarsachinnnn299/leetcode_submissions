#define ll long long

class Solution {
public:
    map<ll,ll>mp;
    bool helper(ll idx, ll k,vector<int>&nums,vector<vector<ll>>&dp)
    {
       if(idx==nums.size()-1)return true;
        if(idx>=nums.size())return false;
        if(dp[idx][k]!=-1)return dp[idx][k];
        bool f1=false,f2=false,f3=false;
        int stone=nums[idx];
        if(mp.find(stone+k)!=mp.end())
        {      int tidx=mp[stone+k];
             f1=helper(tidx,k,nums,dp);
        }
       
        if(stone+k-1!=stone&&mp.find(stone+k-1)!=mp.end()){
            int tidx=mp[stone+k-1];
            f2=helper(tidx,k-1,nums,dp);
        }
        
        
             if(mp.find(stone+k+1)!=mp.end()){
            int tidx=mp[stone+k+1];
            f3=helper(tidx,k+1,nums,dp);
        }
        
       
        return   dp[idx][k]=f1|f2|f3;
        
        
    }
    
    bool canCross(vector<int>& stones) {
      
        
        if(stones.size()==1)return true;
        if(stones[1]-stones[0]>1)return false;
         vector<vector<ll>>dp(stones.size(),vector<ll>(stones.size(),-1));
        for(ll i=0;i<stones.size();i++)mp[1LL*stones[i]]=i;
        return helper(1,1,stones,dp);
    }
};