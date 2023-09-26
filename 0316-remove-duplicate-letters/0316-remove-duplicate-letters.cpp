// https://www.youtube.com/watch?v=2NGFucebfDk

class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>vis(26),last(26);
        string ans;
        for(int i=0;i<s.size();i++)last[s[i]-'a']=i;
        for(int i=0;i<s.size();i++)
        {
            if(vis[s[i]-'a'])continue;
            while(!ans.empty()&&ans.back()>s[i]&&last[ans.back()-'a']>i)
            {   vis[ans.back()-'a']=0;
                ans.pop_back();
                
            }
            ans+=s[i];
            vis[s[i]-'a']=1;
        }
        return ans;
        
        
    }
};