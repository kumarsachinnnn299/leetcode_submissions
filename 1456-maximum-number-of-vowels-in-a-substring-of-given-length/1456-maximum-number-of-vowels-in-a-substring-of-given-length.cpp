class Solution {
public:
    int maxVowels(string s, int k) {
        int ans=0;
        int c=0;
        for(int i=0;i<k;i++)
        {  
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                c++;
            }
        }
        ans=max(ans,c);
        int i=0,j=k;
        while(j<s.size())
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                c--;
                
            }
            i++;
            
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
            {
                c++;
            }
            j++;
            ans=max(ans,c);
        }
        return ans;
        
    }
};