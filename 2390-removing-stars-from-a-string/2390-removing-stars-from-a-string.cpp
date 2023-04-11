

class Solution {
public:
    string removeStars(string s) {

        int c=0;
        bool flag=false;
        
        for(int i=s.size()-1;i>=0;i--)
        {  if(s[i]!='@')
            {
                if(s[i]=='*')
            {
                flag=true;
                c++;
            }
            else{
                if(flag)
                {
                   if(c)s[i]='@';
                    c--;
                    if(c==0)flag=false;
                }
            }
            }
            
        }
        
        string ans;
        for(auto i:s)if(i!='@'&&i!='*')ans+=i;
        return ans;
        
    }
};