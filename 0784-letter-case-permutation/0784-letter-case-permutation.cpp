//Khud kiya

class Solution {
public:
    
    void helper(int idx,unordered_set<string>&ans,vector<string>arr,string s)
    {
        if(idx==arr[0].size())
        {
            ans.insert(s);
            return;
        }
        
        string s2=s;
        s2+=arr[0][idx];
        s+=arr[1][idx];
        helper(idx+1,ans,arr,s);
         helper(idx+1,ans,arr,s2);
        
    }
    
    vector<string> letterCasePermutation(string s) {
        vector<string>ans,arr;
        arr.push_back(s);
        unordered_set<string>st;
        string s2="";
        for(auto i:s){
            if(i-'a'>=0)s2+=toupper(i);
            else s2+=tolower(i);
            
        }
        arr.push_back(s2);
        s2="";
        helper(0,st,arr,s2);
        for(auto i:st)ans.push_back(i);
        return ans;
    }
};