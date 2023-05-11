//Khud kiya

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>mp;
        map<int,set<string>,greater<int>>mp2;
        for(auto i:words)mp[i]++;
        for(auto i:mp)
        {
            mp2[i.second].insert(i.first);
        }
        vector<string>ans;
        for(auto i:mp2)
        {
            for(auto j:i.second)
            {
                ans.push_back(j);
                if(ans.size()==k)return ans;
            }
        }
        return ans;
        
    }
};