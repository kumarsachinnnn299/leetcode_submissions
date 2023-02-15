class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int c=0;
        bool ans=false;
        for(int i=0;i<t.size();i++)
        {
            if(c<s.size())
            {
                if(t[i]==s[c])c++;
            }
        }
        if(c==s.size())return true;
        return false;
    }
};