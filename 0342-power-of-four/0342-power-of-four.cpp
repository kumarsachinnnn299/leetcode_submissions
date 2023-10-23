class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0)return false;
        float temp=(log(n)/(log(4)));
        return ceil(temp)==floor(temp);
    }
};