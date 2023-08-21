class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string temp=s;
        for(int i=0;i<s.size()-1;i++)
        {
            char tempc=temp[0];
            temp.erase(0,1);
            temp.push_back(tempc);
            if(temp==s)return true;
        }
        return false;
    }
};