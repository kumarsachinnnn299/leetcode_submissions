class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        n=(n/4)+(n%4!=0);
        map<int,int>mp;
        for(auto i:arr)
        {
            mp[i]++;
            
        }
       int c=0,ans;
        for(auto i:mp)
        {
            if(i.second>c)
            {
                c=i.second;
                ans=i.first;
            }
        }
        return ans;
    }
};