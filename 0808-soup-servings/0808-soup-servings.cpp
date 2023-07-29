// https://www.youtube.com/watch?v=lxTblMLfbMk

class Solution {
public:
    
    double helper(int a,int b,  map<pair<int,int>,double>&mp)
    {
        
        if(a<=0&&b<=0)return 0.5;
        if(a<=0)return 1;
        if(b<=0)return 0;
        double ans=0;
        
        if(mp.find({a,b})!=mp.end())return mp[{a,b}];
        
        ans+=helper(a-100,b,mp);
        ans+=helper(a-75,b-25,mp);
        ans+=helper(a-50,b-50,mp);
        ans+=helper(a-25,b-75,mp);
        return mp[{a,b}]=(double)ans/(double)4;
        
        
    }
    
    
    double soupServings(int n) {
        if(n>=5000)return 1.0;
        map<pair<int,int>,double>mp;
        return helper(n,n,mp);
        
    }
};