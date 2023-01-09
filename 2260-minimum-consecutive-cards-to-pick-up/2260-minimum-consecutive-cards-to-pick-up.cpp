class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        map<int,vector<int>>mp;
        for(int i=0;i<cards.size();i++)
        {
            mp[cards[i]].push_back(i);
        }
        int ans=INT_MAX;
        for(auto i:mp)
        {   
            auto temp=i.second;
           for(int i=1;i<temp.size();i++)
           {
               ans=min(ans,temp[i]-temp[i-1]+1);
           }
           
        }
        if(ans==INT_MAX)return -1;
        return ans;
        
    }
};