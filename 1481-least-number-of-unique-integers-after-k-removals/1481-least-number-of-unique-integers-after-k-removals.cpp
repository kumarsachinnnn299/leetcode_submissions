class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(auto i:arr)mp[i]++;
        vector<pair<int,int>>freq;
        for(auto i:mp)
        {
            freq.push_back({i.second,i.first});
        }
        
        sort(freq.begin(),freq.end());
        
        // for(auto i:freq)cout<<i.first<<'-'<<i.second<<endl;
        
        int c=0;
        for(auto i:freq)
        {
            k-=i.first;
            if(k>=0)c++;
            if(k==0)break;
        }
        return freq.size()-c;
    }
};