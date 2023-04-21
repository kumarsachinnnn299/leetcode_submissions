//similar to house robbers 1
//bas ek condition change hogi 
//if 1 is inlcuded last should not be included as they are adjacent
//if last is included then first should not be included

//just use same fn 0 to last-1, and 1 to last and return max

//Love babbar approach

class Solution {
public:
    
  int helper(vector<int>& nums,vector<int>& dp,int idx, bool startswithzero)
    {   
        if(startswithzero)
        {
            if(idx>=nums.size()-1)return 0;
        }
        
      else{
           if(idx>=nums.size())return 0;
      }
        
        
        if(dp[idx]!=-1)return dp[idx];
       
        int taken=nums[idx]+helper(nums,dp,idx+2,startswithzero);
       
        int nottaken=helper(nums,dp,idx+1,startswithzero);
        
      
        return dp[idx]=max(taken,nottaken);
        
        
        
    }
    
    int rob(vector<int>& nums) {
       
        int n=nums.size();
         if(n==1)return nums[0];
       vector<int>dp(n,-1),dp2(n,-1);
        int temp=helper(nums,dp,0,true);
  
        int temp2=helper(nums,dp2,1,false);
        
        return max(temp,temp2);
    }
};