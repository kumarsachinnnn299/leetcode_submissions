class Solution {
public:
    
    int M=1e9+7;
    
    int helper(int t)
    {
        return (t*(t-1))/2;
    }
    
    int countOrders(int n) {
        
        int t=2*n;
        int ans=1;
        while(t>=4)
        {
            ans=(1LL*ans*helper(t))%M;
            t-=2;
            
        }
        return ans;
        
    }
};