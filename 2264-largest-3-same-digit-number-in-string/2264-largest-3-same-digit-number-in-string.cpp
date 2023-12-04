class Solution {
public:
    string largestGoodInteger(string s) {
        string ans;
        bool found=false;
        int n=s.length();
        for(int i=0;i<n-2;i++)
        {  
            if(s[i]==s[i+1]&&s[i]==s[i+2])
            {   
                if(found)
                {
                    if(ans[0]-'0'<s[i]-'0'){
                        ans="";
                        ans+=s[i];
                    ans+=s[i];
                    ans+=s[i];
                    }
                }
                else{
                    found=true;
                    ans+=s[i];
                    ans+=s[i];
                    ans+=s[i];
                    
                }
                i+=2;
            }
            
        }
        return ans;
    }
};