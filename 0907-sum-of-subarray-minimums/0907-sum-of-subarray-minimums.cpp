//ND

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size(), mod=1e9+7;
        vector<long long> dp(n, -1); 
        vector<int> stack;
        long long ans=0;
        for(int i=0; i<n; i++){
            
            while(!stack.empty() && arr[i]<=arr[stack.back()])
                stack.pop_back();
            if (!stack.empty()){
                int j=stack.back();
                dp[i]=dp[j]+arr[i]*(i-j);
            }
            else dp[i]=arr[i]*(i+1);
            stack.push_back(i);
            ans=(ans+dp[i])%mod;
        }
        return ans;      
    }
};

auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();