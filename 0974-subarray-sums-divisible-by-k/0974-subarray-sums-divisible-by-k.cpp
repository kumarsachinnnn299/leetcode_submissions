
// https://www.youtube.com/watch?v=QM0klnvTQzk

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum=0;
        map<int,int>mp;
        mp[0]=1;
        int ans=0;
        for(auto i:nums)
        {
            sum+=i;
            int rem=sum%k;
            if(rem%k<0)rem+=k;
            if(mp[rem]>0)
            {
                ans+=mp[rem];
                mp[rem]++;
            }
            else{
                mp[rem]++;
            }
        }
        return ans;
    }
};