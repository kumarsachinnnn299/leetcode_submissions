class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n+1);
       
        for(int i=0;i<n;i++)
        {
            pre[i+1]=pre[i]+nums[i];
        }
        
        for(auto i:pre)cout<<i<<' ';
        
        for(int i=1;i<=n;i++)
        {
            if(pre[i-1]==(pre[n]-pre[i]))return i-1;
        }
        return -1;
    }
};