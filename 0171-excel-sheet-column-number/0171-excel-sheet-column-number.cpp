// https://www.youtube.com/watch?v=_NqvWkRN3Dc

class Solution {
public:
    int titleToNumber(string s) {
        long long  ans=0;
        for(int i=0;i<s.size();i++)
        {
            ans=((ans*26)+s[i]-'A'+1);
        }
        return ans;
    }
};