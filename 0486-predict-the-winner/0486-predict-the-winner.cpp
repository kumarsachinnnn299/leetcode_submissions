//Imp for interviews
//Tricky
// https://www.youtube.com/watch?v=_qMuhtc5WLs


class Solution {
public:
    
    int helper(int sidx,int eidx,vector<int>&nums,bool p1chance )
    {
        if(sidx>eidx)return 0;
        int ans=0;
        if(p1chance)
        {
            ans=max(nums[sidx]+helper(sidx+1,eidx,nums,false),nums[eidx]+helper(sidx,eidx-1,nums,false));
        }
        else{
            ans=min(-nums[sidx]+helper(sidx+1,eidx,nums,true),-nums[eidx]+helper(sidx,eidx-1,nums,true));
        }
        return ans;
    }
    
    bool PredictTheWinner(vector<int>& nums) {
        
        int p1chance=true;
        return helper(0,nums.size()-1,nums,p1chance)>=0;
        
    }
};