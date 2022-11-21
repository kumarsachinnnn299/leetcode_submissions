class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)return 1;
        int temp=~n;
        int mask=0;
        while(n)
        {  mask=mask<<1;
            mask=mask|1;
          
            n=n>>1;
        }
        return mask&temp;
    }
};