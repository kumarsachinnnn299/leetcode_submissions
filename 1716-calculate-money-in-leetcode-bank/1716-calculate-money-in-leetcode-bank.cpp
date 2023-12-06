class Solution {
public:
    int totalMoney(int n) {
        if(n<=7)return (n*(n+1))/2;
        int weeks=n/7;
        int ans=weeks*28;
        weeks--;
        int t=(weeks*(weeks+1))/2;
        ans+=(7*(t));
        int c=1;
        int m=weeks+2;
        int loop=n%7;
       
        while(loop--)
        {
            ans+=(c+m-1);
            c++;
        }
        return ans;
        
    }
};