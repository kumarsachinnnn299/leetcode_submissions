class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
       int d;
        bool p=false,n=false;
        for(int i=1;i<nums.size();i++)
        {
            d=nums[i]-nums[i-1];
            if(d>0)p=true;
            if(d<0)n=true;
            if(p==true && n==true)return false;
                   
        }
        return true;
        
        
    }
};