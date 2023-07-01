//Backtracking question
// https://www.youtube.com/watch?v=T_2AOlGIvfg
//Complex 
class Solution {
public:
    
    int helper(int i,vector<int>&v, vector<int>&a)
    {
        if(i==v.size())
        {
            int ans=0;
            for(auto i:a)ans=max(ans,i);
            return ans;
        }
        int mine=INT_MAX;
        for(int j=0;j<a.size();j++)
        {
            a[j]+=v[i];
            mine=min(mine,helper(i+1,v,a));
            a[j]-=v[i];
        }
        return mine;
    }
    
    int distributeCookies(vector<int>& v, int k) {
        vector<int>a(k);
        return helper(0,v,a);
    }
};