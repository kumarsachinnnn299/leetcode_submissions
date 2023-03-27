//Khud kiya

class Solution {
public:
    long long findScore(vector<int>& nums) {
        map<long long,vector<long long>>mp;
        vector<bool>vis(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]].push_back(i);
        }
        long long ans=0;
        for(auto i:mp)
        {
            for(auto j:i.second)
            {
                if(vis[j]==false)
                {
                    ans+=nums[j];
                    vis[j]=true;
                    if(j<nums.size()-1)vis[j+1]=true;
                    if(j>0)vis[j-1]=true;
                }
            }
        }
        return ans;
        
    }
};