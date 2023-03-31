// https://www.youtube.com/watch?v=y81vHwvfqFI

class Solution {
public:
    string reverseWords(string s) {
        int st=0,e=s.size()-1;
        while(s[st]==' ')st++;
        while(s[e]==' ')e--;
        string ans="",temp="";
        for(int i=e;i>=st;i--)
        {
            if(s[i]!=' ')temp+=s[i];
            else{
                reverse(temp.begin(),temp.end());
                if(ans.size()>0&&temp.size()>0)
                {
                    ans+=' ';
                    ans+=temp;
                }
                else{
                    ans+=temp;
                }
                temp="";
            }
        }
        reverse(temp.begin(),temp.end());
        if(ans.size()>0)ans+=' '+temp;
        else ans+=temp;
        return ans;
    }
};