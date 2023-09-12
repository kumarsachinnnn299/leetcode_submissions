class Solution {
public:
    int minDeletions(string s) {
        vector<int>arr(26);
        unordered_map<int,vector<char>>mp;
        for(auto i:s)arr[i-'a']++;
        for(int i=0;i<26;i++)
        {
            if(arr[i])
            {
                mp[arr[i]].push_back('a'+i);
            }
        }
        int ans=0;
        
        for(auto i:mp)
        {
           auto temp =i.second;
            int count=i.first;
            if(temp.size()>1)
            {
                for(int j=1;j<temp.size();j++)
                {
                    while(mp.find(count)!=mp.end())count--;
                    ans+=(i.first-count);
                    if(count!=0)mp[count].push_back(temp[j]);
                }
            }
            
        }
        return ans;
    }
};