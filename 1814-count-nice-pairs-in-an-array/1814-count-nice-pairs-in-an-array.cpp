// https://www.youtube.com/watch?v=3gY4nYK_1d0


class Solution {
public:
    
    
    
    int reverse(int n)
    {
        int rev=0;
        while(n)
        {
            rev=rev*10+n%10;
            n/=10;
        }
        return rev;
    }
    
    int countNicePairs(vector<int>& nums) {
        
        int mod=1e9+7;
        unordered_map<int,int>mp;
        int ans=0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            int temp=nums[i]-reverse(nums[i]);
            if(mp.find(temp)!=mp.end()){
                ans=(ans+mp[temp])%mod;
            }
            mp[temp]++;
        }
        
        return ans;
        
    }
};