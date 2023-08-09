//Recusrsion by Fraz

class Solution {
public:
    void helper(int idx,string& dig,unordered_map<char,string>&mp,vector<string>&ans,string &temp)
    {
     if(idx==dig.size())
     {
         ans.push_back(temp);
         return;
     }
        string s=mp[dig[idx]];
            for(int i=0;i<s.size();i++)
            {
                temp.push_back(s[i]);
                helper(idx+1,dig,mp,ans,temp);
                temp.pop_back();
            }
    
    
        
    }
    
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)return {};
        unordered_map<char,string>letter;
            letter['2']="abc";
            letter['3']="def";
            letter['4']="ghi";
            letter['5']="jkl";
            letter['6']="mno";
            letter['7']="pqrs";
            letter['8']="tuv";
            letter['9']="wxyz";
      vector<string>ans;
        string temp="";
         helper(0,digits,letter,ans,temp);
        return ans;
     
          
    }
};