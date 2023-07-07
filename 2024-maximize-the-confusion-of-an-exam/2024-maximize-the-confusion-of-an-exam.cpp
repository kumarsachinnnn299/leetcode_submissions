// https://www.youtube.com/watch?v=YQlsxIcXASk
//count f and t and at each point we only flip the character which are minimum


class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
     
        int ans=0,t=0,f=0,st=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='T')t++;
            else f++;
            if(min(t,f)>k)
            {
                if(s[st]=='T')t--;
                else f--;
                st++;
            }
            ans=max(ans,f+t);
        }
        return ans;
        
    }
};