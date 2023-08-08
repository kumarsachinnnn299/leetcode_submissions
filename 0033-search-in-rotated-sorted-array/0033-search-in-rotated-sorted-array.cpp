class Solution {
public:
    
    int minElement(vector<int>&nums)
    {   int n=nums.size();
        int s=0,e=nums.size()-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]<nums[(mid-1+n)%n]&&nums[mid]<nums[(mid+1)%n])return mid;
             else if(nums[mid]<nums[e])e=mid-1;
            else s=mid+1;
        }
     
        return 0;
    }
    
    int ispresent(int s,int e,vector<int>&nums,int target)
    {   
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid]<target)s=mid+1;
            else e=mid-1;
        }
        return -1;
    }
    
        
    
    
    int search(vector<int>& nums, int target) {
        int idx=minElement(nums);
        // cout<<nums[idx]<<endl;
        int l=ispresent(0,idx-1,nums,target);
        if(l!=-1)return l;
         int r=ispresent(idx,nums.size()-1,nums,target);
        if(r!=-1)return r;
        return -1;
    }
};