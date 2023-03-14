class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<int,int>mp;
        for(int i=0;i<order.size();i++)
        {
            mp[order[i]]=i+1;
        }
        vector<vector<int>>arr;
        for(int i=0;i<s.size();i++)
        {
            arr.push_back({i,mp[s[i]]});
        }
        sort(arr.begin(),arr.end(),[](vector<int>&a,vector<int>&b)
             {
                 return a[1]<b[1];
             });
        string ans="";
        for(auto i:arr)
        {   ans+=s[i[0]];
            cout<<i[0]<<' '<<i[1]<<endl;
        }
        return ans;
    }
    
};