class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums)mp[i]++;
        int ans=0;
        for(auto i:mp)
        {
            int c=i.second;
           if(c==1)return -1;
            ans+=(c/3)+((c%3)!=0);
            
        }
        return ans;
    }
};