class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        if(arr.size()<3)return 0;
        int s=0,e=arr.size()-1;
        int ans=0;
        while(s<e)
        {
            int mid=s+(e-s)/2;
            
           if(arr[mid+1]>arr[mid])
           {
               s=mid+1;
               ans=mid+1;
           }
            else{
                e=mid;
                ans=e;
            }
        }
        return ans;
        
    }
};