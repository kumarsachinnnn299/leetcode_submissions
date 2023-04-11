class Solution {
public:
    string removeStars(string s) {
//         vector<int>arr;
//         int st=0,e=s.size()-1;
//         for(int i=0;i<s.size();i++)
//         {
            
//         }
//         stack<char>st;
//         for(auto i:s)
//         {
//             if(i!='*')st.push(i);
//             else st.pop();
//         }
        
//         string ans="";
//         while(!st.empty())
//         {
//             ans=st.top()+ans;
//             st.pop();
//         }
//         return ans;
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