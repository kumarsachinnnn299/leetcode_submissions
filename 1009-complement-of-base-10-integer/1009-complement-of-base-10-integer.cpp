class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)return 1;
        int ans=0;
        int i=0;
        while(n)
        {
            if(n%2==0)ans+=pow(2,i);
            n=n>>1;
            cout<<n<<' '<<ans<<endl;
            i++;
        }
        return ans;
    }
};