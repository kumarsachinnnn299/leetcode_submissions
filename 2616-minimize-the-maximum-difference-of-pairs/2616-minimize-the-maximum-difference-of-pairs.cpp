// https://www.youtube.com/watch?v=UVV9EzsXGwo&list=PLZwqtTlu3nLHEYTb74WOP7LM99uJGf7oI&index=2
//Good question of binary search


class Solution {
public:
    
    bool isvalid(int mid,vector<int>&nums,int p)
    {
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1]<=mid){
                p--;
                i++;//because one index can only be used once
            }
            if(p==0)return true;
        }
        return p<=0;
    }
    
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(),nums.end());
        int s=0,e=nums[nums.size()-1]-nums[0];
        int ans=e;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(isvalid(mid,nums,p))
            {
                ans=mid;
                e=mid-1;
            }
            else s=mid+1;
        }
        return ans;
    }
};