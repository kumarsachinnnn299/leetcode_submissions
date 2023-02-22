class Solution {
public:
    long long maximumSubsequenceCount(string text, string pattern) {
        long long ans=0,c1=0,c2=0;
        for(int i=0;i<text.size();i++)
        {
            if(text[i]==pattern[1])
            {
                ans+=c1;
                c2++;
            }
            if(text[i]==pattern[0])
            {
                c1++;
            }
        }
        return max(ans+c1,ans+c2);
    }
};