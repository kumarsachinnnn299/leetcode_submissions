class Solution {
    
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n=nums.size();
         for(int i=0;i<n-3;i++)
        {
           if(i==0||nums[i]!=nums[i-1])
           {
               for(int j=i+1;j<n-2;j++)
              {
                   if(j==i+1||nums[j]!=nums[j-1])
                   {   long long tsum=target-((long long)(nums[i])+(long long)(nums[j]));
                       int s=j+1,e=n-1;
                   while(s<e)
                   {    
                       if((nums[s]+nums[e])>tsum)e--;
                    else if((nums[s]+nums[e])<tsum)s++;
                    else{
                        ans.push_back({nums[i],nums[j],nums[s],nums[e]});
                        while(s<e&&nums[s]==nums[s+1])s++;
                        while(s<e&&nums[e]==nums[e-1])e--;
                            s++;
                        e--;
                    }
                   }
               }
              }
           }
        }
        return ans;
    }
};