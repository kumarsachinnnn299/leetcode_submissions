// concept: https://www.youtube.com/watch?v=M-EI2cj2PNY

// Code: https://www.youtube.com/watch?v=TSX__xdfOM8

class Solution {
public:
    int numWays(string s) {
        long M=1e9+7;
        long n=s.size();
        long countone=0;
        for(auto i:s)
        {
            if(i=='1')countone++;
        }
        if(countone%3)return 0;
        if(countone==0)
        {
            return int((((n-1)*(n-2))/2)%M);
        }
        
        long onethird1=countone/3;
        countone=0;
        long ways1=0;
        long ways2=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')countone++;
            if(countone==onethird1)ways1++;
            if(countone==(2*onethird1))ways2++;
        }
        return (int)((ways1*ways2)%M);
        
        
    }
};