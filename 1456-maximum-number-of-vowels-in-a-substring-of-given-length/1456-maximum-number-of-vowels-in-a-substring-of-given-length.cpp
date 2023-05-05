//Khud kiya

class Solution {
public:
    int maxVowels(string s, int k) {
        int ans=0;
        for(int i=0;i<k;i++)
        {  
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                ans++;
            }
        }
        int i=0,j=k;
        int c=ans;
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
            
            if(c>ans)ans=c;
           
        }
        return ans;
        
    }
};