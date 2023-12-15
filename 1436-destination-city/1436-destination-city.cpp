class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,string>mp;
        for(auto i:paths)
        {
            mp[i[0]]=i[1];
        }
        for(auto i:mp)
        {
            if(mp.find(i.second)==mp.end())return i.second;
        }
        return "";
    }
};