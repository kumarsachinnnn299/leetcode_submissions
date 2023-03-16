class Solution {
public:
    static bool comp(const string &s1,const string &s2){
        return s1.size() < s2.size();
    }
    vector<string> stringMatching(vector<string>& words) {
        sort(words.begin(),words.end(),comp);
        vector<string>ans;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                if(words[j].find(words[i]) != -1){
                    ans.push_back(words[i]);
                    break;
                }
            }
        }
        return ans;
    }
};