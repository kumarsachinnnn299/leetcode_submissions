class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<long long,long long>mp;
        for(auto i:arr)
        {
            mp[i]++;
        }
        vector<long long>vec;
        for(auto i:mp)
        {
            if(find(vec.begin(),vec.end(),i.second)!=vec.end())return false;
            else vec.push_back(i.second);
        }
        return true;
        
    }
};