class Solution {
public:
    string largestNumber(vector<int>& nums) {
       vector<string>arr;
        for(auto i:nums)arr.push_back(to_string(i));
        sort(arr.begin(),arr.end(),[](string &a, string &b)
             {
                return a+b>b+a;   
             });
        string ans="";
        for(auto i:arr)ans+=i;
        int i=0;
        while(ans[i]=='0'&&i<ans.size()-1)i++;
        
        return ans.substr(i,ans.size()-i);
    }
};