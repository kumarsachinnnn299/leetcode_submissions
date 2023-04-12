// https://leetcode.com/problems/single-element-in-a-sorted-array/discuss/3212178/Day-52-oror-Binary-Search-oror-Easiest-Beginner-Friendly-Sol

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=0,e=nums.size()-1;
        if(nums.size()==1)return nums[0];
        while(s<=e)
        {   
            int mid=s+(e-s)/2;
            if(mid%2==0)
            {
                if(nums[mid+1]!=nums[mid])e=mid-1;
                else s=mid+1;
            }
            else{
                if(nums[mid-1]!=nums[mid])e=mid-1;
                else s=mid+1;
            }
        }
        
       // if(s==e)return nums[s];
        cout<<s<<' '<<e<<endl;
        
        return nums[e+1];
    }
};