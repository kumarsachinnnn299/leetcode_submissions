
// https://www.youtube.com/watch?v=sK-ON4570TI
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2)return 0;
        int mini=*min_element(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());
        double gap=((maxi-mini)*1.0)/(nums.size()-1);
        if(gap<1.0)gap=1.0;
        vector<pair<int,int>>arr(nums.size(),{INT_MAX,INT_MIN});
        for(int i=0;i<nums.size();i++)
        {
            int pos=(nums[i]-mini)/gap;
            arr[pos].first=min(arr[pos].first,nums[i]);
             arr[pos].second=max(arr[pos].second,nums[i]);
            
        }
        int prevmax=arr[0].second,ans=0;
        
        
        for(int i=1;i<nums.size();i++)
        {
            if(arr[i].first==INT_MAX)continue;
            ans=max(ans,arr[i].first-prevmax);
            prevmax=arr[i].second;
        }
        return ans;
        
    }
};