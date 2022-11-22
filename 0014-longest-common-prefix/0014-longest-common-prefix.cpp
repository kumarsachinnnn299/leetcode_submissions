class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1)return strs[0];
        string ans="";
        for(int i=0;i<strs[0].size();i++)
        {
            for(int j=1;j<strs.size();j++)
            {
                if(i>strs[j].size()||strs[j][i]!=strs[0][i])return ans;
            }
            ans+=strs[0][i];
        }
        return ans;
    }
};