class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>arr(26);
        for(auto i:s)arr[i-'a']++;
        for(auto i:t)arr[i-'a']--;
        for(auto i:arr)
        {
            if(i<0||i>0)return 0;
        }
        return 1;
    }
};