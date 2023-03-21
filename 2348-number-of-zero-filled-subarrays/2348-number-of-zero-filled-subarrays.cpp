// https://practice.geeksforgeeks.org/problems/0960a833f70b09c59444ea487f99729929fc8910/0
// same tha gfg ka potd kuch din pehle aaya

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
        long long c=0;
        for(auto i:nums)
        {
            if(i==0)c++;
            else {
                ans+=(c*(c+1))/2;
            c=0;}
        }
        if(c)ans+=(c*(c+1))/2;
        return ans;
    }
};
