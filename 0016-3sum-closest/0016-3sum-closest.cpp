// https://www.youtube.com/watch?v=anuarmFjTGU

class Solution {
    
    
    
    public:
    
    int threeSumClosest(vector<int>& nums, int target) {
        int ans=0,dif=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int s=i+1,e=nums.size()-1;
            while(s<e)
            {   
                if((nums[i]+nums[s]+nums[e])==target)return target;
                
                if(abs(target-nums[i]-nums[s]-nums[e])<dif)
                {
                    dif=abs(target-nums[i]-nums[s]-nums[e]);
                             ans=nums[i]+nums[s]+nums[e];
                }
               if((nums[i]+nums[s]+nums[e])<target)s++;
                               else e--;
            }
        }
        return ans;
    }
};