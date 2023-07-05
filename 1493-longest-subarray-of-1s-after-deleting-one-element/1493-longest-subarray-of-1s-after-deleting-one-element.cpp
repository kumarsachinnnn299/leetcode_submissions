//Sliding window
// https://www.youtube.com/watch?v=WpqF7Mv_gnk

class Solution {
public:
    

        
    
    int longestSubarray(vector<int>& nums) {
        
        int ans=0,s=0,e=0,zero=0;
        while(e<nums.size())
        {
            if(nums[e]==0)zero++;
            if(zero>1)
            {
                if(nums[s]==0)zero--;
                s++;
            }
            ans=max(ans,e-s);
            
            
            e++;
        }
        return ans;
        
        
    }
};