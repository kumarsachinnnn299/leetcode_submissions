//ND
class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans(n,-1);
        if(n<=k*2)
        {
            return ans;
        }
        
        long long int sum=0;
        for(int i=0;i<=k*2;i++)
        {
            sum+=nums[i];
        }
        ans[k]=sum/((k*2)+1);
        for(int i=k+1;i<n-k;i++)
        {
            sum-=nums[i-k-1];
            sum+=nums[i+k];
            ans[i]=sum/((k*2)+1);
        }
        return ans;
    }
};