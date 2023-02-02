class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int>mp;
        for(int i=0;i<order.size();i++){
            mp[order[i]]=i;
        }
        for(int i=0;i<words.size()-1;i++)
        {
            string word1=words[i];
            string word2=words[i+1];
            int len=min(word1.size(),word2.size());
            for(int j=0;j<len;j++)
            {
                if(mp[word1[j]]>mp[word2[j]])return false;
                else if(mp[word1[j]]<mp[word2[j]]){
                    break;
                }
            }
            if(word1.size()>word2.size()&&mp[word1[len-1]]==mp[word2[len-1]])return false;
        }
        return true;

    }
};