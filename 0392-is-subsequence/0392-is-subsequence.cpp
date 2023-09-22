class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s==t)return true;
        int idx=0;
        for(auto i:t)
        {
            if(i==s[idx])idx++;
            if(idx==s.size())return true;
            
        }
            return false;
    }
};