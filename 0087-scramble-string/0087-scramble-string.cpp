//Not fully understood
// https://www.youtube.com/watch?v=Y0U5pjJp_FY&t=327s


class Solution {
public:
    
    bool helper(unordered_map<string,bool>&mp,string s1,string s2)
    {
        int len=s1.size();
        bool res=false;
        if(len==0)return true;
        if(len==1)return s1==s2;
        if(mp.find(s1+s2)!=mp.end())return mp[s1+s2];
        if(s1==s2)return true;
        for(int i=1;i<len;i++)
        {
            res=res||(helper(mp,s1.substr(0,i),s2.substr(0,i))&&helper(mp,s1.substr(i,len-i),s2.substr(i,len-i)));//without reversing  just splitting
            res=res||(helper(mp,s1.substr(0,i),s2.substr(len-i,i)))&&helper(mp,s1.substr(i,len-i),s2.substr(0,len-i));
        }
                      return mp[s1+s2]=res;
        
    }
    
    bool isScramble(string s1, string s2) {
     unordered_map<string,bool>mp;
        return helper(mp,s1,s2);
    }
};