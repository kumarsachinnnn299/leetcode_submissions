// https://www.youtube.com/watch?v=4sQL7R5ySUU
//simple luv ki video se samjh aa gya simple

class Solution {
public:
    int binarySearch(vector<int>nums,int target,bool left)
    {   int l=0,r=nums.size()-1;
        int i=-1;
     while(l<=r){
         int mid=l+(r-l)/2;
        if(nums[mid]>target)r=mid-1;
        else if(nums[mid]<target)l=mid+1;
        else{ i=mid;
            if(left)r=mid-1;
            else l=mid+1;
        }
     }
        
         return i;  
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int temp=binarySearch(nums,target,true);
        ans.push_back(temp);
        temp=binarySearch(nums,target,false);
        ans.push_back(temp);
        return ans;
    }
};