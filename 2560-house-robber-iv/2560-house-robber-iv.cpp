
// https://www.youtube.com/watch?v=X1QdmM0TxVo
//Binary search


class Solution {
public:
    
    bool valid(int mid, vector<int>&nums,int k)
    {
        int i=0,n=nums.size();
        while(i<n)
        {
            if(nums[i]<=mid)
              {  k--;
                i+=2;}
            else i++;
            if(k==0)return true;
        }
        
        return k==0;
    }
    
    int minCapability(vector<int>& nums, int k) {
        int s=1, e=1e9;
        int ans=INT_MAX;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(valid(mid,nums,k))
            {
                ans=min(ans,mid);
                e=mid-1;
            }
            else s=mid+1;
        }
        return ans;
    }
};