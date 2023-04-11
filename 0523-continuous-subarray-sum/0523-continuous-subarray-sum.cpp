// https://www.youtube.com/watch?v=5rhImNhg7LA&t=381s

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        long long sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
         sum+=nums[i];
         if(sum%k==0&&i!=0)return true;   
            
         if(mp.find(sum%k)!=mp.end())
         {
             if(i-mp[sum%k]>=2)return true;
         }
        else{
                mp[sum%k]=i;
            }
            
        }
        return false;
    }
};