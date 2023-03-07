class Solution {
public:
    string thousandSeparator(int n) {
        string s=to_string(n);
        
        string ans="",temp="";
        int c=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            temp=s[i]+temp;
            c++;
            if(c==3)
            {
                
                if(i!=0)ans='.'+temp+ans;
                else ans=temp+ans;
                c=0;
                temp="";
            }
        }
        if(c)ans=temp+ans;
        return ans;
        
    }
};