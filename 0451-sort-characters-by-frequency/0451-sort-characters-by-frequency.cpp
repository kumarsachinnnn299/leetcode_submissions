class Solution {
public:
    
    //Done
    
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto i:s)mp[i]++;
        vector<pair<int,char>>temp;
        for(auto i:mp)
        {
            temp.push_back({i.second,i.first});
        }
        
        sort(temp.begin(),temp.end());
        
        // for(auto i:mp)cout<<i.first<<' '<<i.second<<endl;
        // cout<<endl;
        //  for(auto i:temp)cout<<i.first<<' '<<i.second<<endl;
        
        string ans;
        for(int i=temp.size()-1;i>=0;i--)
        {
            int n=temp[i].first;
            while(n--)
            {
                
                ans+=(temp[i].second);
            }
            
        }
        return ans;
        
        
    }
};