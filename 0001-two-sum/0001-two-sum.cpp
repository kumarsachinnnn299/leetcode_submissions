class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        
        vector<int>ans;
       for(int i=0;i<nums.size();i++)
       {
           int n=nums[i],comp=target-nums[i];
           if(mp[comp])
           {
               ans.push_back(i);
               ans.push_back(mp[comp]-1);
               return ans;
           }
           else{
               mp[nums[i]]=i+1;
           }
       }
        return ans;
    }
};