
//Simple
// https://www.youtube.com/watch?v=XO4U2KWgIgY

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        vector<string>words;
        string temp="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                words.push_back(temp);
                temp="";
            }
            else{
                temp+=s[i];
            }
        }
        words.push_back(temp);
        map<char,string>mp;
        if(pattern.size()!=words.size())return false;
        set<string>st;
        for(int i=0;i<pattern.size();i++)
        {
            if(mp.find(pattern[i])!=mp.end())
            {
                if(mp[pattern[i]]!=words[i])return false;
            }
            else{
               if(st.count(words[i])>0)return false;
                mp[pattern[i]]=words[i];
                st.insert(words[i]);
            }
        }
        return true;
        
    }
};