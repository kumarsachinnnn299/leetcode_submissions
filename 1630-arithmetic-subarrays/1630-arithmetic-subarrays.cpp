class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        for(int i=0;i<l.size();i++)
        {   vector<int>arr;
            int s=l[i],e=r[i];
         
            for(int i=s;i<=e;i++)
            {
             arr.push_back(nums[i]);  
            }
         sort(arr.begin(),arr.end());
         if(arr.size()==1)ans.push_back(true);
         else{ bool flag=true;
             int temp=arr[1]-arr[0];
             for(int i=1;i<arr.size();i++)
             {
                 if(arr[i]-arr[i-1]!=temp){
                     flag=false;
                     break;
                 }
             }
              ans.push_back(flag);
         }
            
        }
        return ans;
    }
};