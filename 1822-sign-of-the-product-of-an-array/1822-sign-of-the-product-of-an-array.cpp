class Solution {
public:
    int arraySign(vector<int>& nums) {
        int c=0;
        for(auto i:nums)
        {
            if(i==0)return 0;
            if(i<0)c++;
        }
        if(c%2)return -1;
        return 1;
    }
};