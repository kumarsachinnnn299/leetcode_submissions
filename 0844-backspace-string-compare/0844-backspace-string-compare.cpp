class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1="",t1="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#'&&s1.size())s1.pop_back();
            else if(s[i]=='#')continue;
            else s1+=s[i];
            
        }
        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#'&&t1.size())t1.pop_back();
            else if(t[i]=='#')continue;
            else t1+=t[i];
        }
        
     
        
        return s1==t1;
    }
};