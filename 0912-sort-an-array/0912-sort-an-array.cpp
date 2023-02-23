class Solution {
public:
    
    void merge(vector<int>&nums,int s,int mid,int e)
    {
        vector<int>arr1(mid-s+1),arr2(e-mid);
        for(int i=0;i<arr1.size();i++)arr1[i]=nums[s+i];
        for(int i=0;i<arr2.size();i++)arr2[i]=nums[mid+i+1];
        int i=0,j=0,k=s;
        while(i<arr1.size()&&j<arr2.size())
        {
            if(arr1[i]<=arr2[j])nums[k++]=arr1[i++];
            else nums[k++]=arr2[j++];
        }
        while(i<arr1.size())nums[k++]=arr1[i++];
        while(j<arr2.size())nums[k++]=arr2[j++];
    }
    
    void mergesort(vector<int>&nums,int s,int e)
    {
        if(s<e)
        {
             int mid=s+(e-s)/2;
            mergesort(nums,s,mid);
            mergesort(nums,mid+1,e);
            merge(nums,s,mid,e);
        }
    }
    
    
    vector<int> sortArray(vector<int>& nums) {
      mergesort(nums,0,nums.size()-1);
        return nums;
    }
};