//reference:https://www.youtube.com/watch?v=WpYHNHofwjc

class Solution {
public:
    string longestPalindrome(string s) {
        int l=s.length(),st,end;
        if(l==1||(l==2&&s[0]==s[1]))return s;
        bool dp[l][l];
        int length=0;
        for(int g=0;g<l;g++)
        {
            for(int i=0,j=g;j<l;j++,i++)
            {
                if(g==0)
                {
                    dp[i][j]=true;
                }
                else if(g==1){
                    if(s[i]==s[j])dp[i][j]=true;
                    else dp[i][j]=false;
                }
                else{
                    if(s[i]==s[j]&&dp[i+1][j-1])dp[i][j]=true;
                    else dp[i][j]=false;
                }
                
                if(dp[i][j])
                {
                    length=g+1;
                    st=i;
                    end=j;
                }
            }
            
        }
        string ans;
        for(int i=st;i<=end;i++)ans+=s[i];
        return ans;
    }
};