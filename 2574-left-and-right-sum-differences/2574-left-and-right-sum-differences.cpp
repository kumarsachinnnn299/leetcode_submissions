#define ll long long 

class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<ll>rs(nums.size()),ls;
        rs[nums.size()-1]=0;
        ls.push_back(0);
        ll sum=0;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            sum+=nums[i-1];
            ls.push_back(sum);
        }
        sum=0;
        for(int i=n-2;i>=0;i-- )
        {
            sum+=nums[i+1];
            rs[i]=sum;
        }
        
       vector<int>ans;
        for(int i=0;i<n;i++)ans.push_back(abs(ls[i]-rs[i]));
        
        return ans;
    }
};