
// https://www.youtube.com/watch?v=Csqlac6k1U4

class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        map<char,vector<int>>mp;
     for(int i=0;i<s.size();i++)mp[s[i]].push_back(i);
        int ans=0;
       
        for(int i=0;i<words.size();i++)
        {
             int loc=-1;
            string word=words[i];
            for(int j=0;j<word.size();j++)
            {
                auto k=upper_bound(mp[word[j]].begin(),mp[word[j]].end(),loc);
                if(k==mp[word[j]].end())break;
                // loc=k-mp[word[j]].begin();
                loc=*k;
                if(j==word.size()-1)ans++;
            }
        }
        return ans;
    }
};