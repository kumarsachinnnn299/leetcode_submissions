class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans=0;
        for(int i=0;i<31;i++)
        {
            if(c%2==1&&a%2==0&&b%2==0)ans++;
            else if(c%2==0)
            {
                if(a%2)ans++;
                if(b%2)ans++;
            }
            
            a=a>>1;
            b=b>>1;
            c=c>>1;
        }
        return ans;
        
        
    }
};