class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>arr(26);
        for(auto i:s)arr[i-'a']++;
        for(auto i:t)arr[i-'a']--;
        string ans;
        for(int i=0;i<26;i++)if(arr[i]<0)return 'a'+i;
        return ' ';
      
    }
};