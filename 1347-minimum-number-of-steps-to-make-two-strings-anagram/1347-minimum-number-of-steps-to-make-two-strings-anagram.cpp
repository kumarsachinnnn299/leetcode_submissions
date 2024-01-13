class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>arr(26);
        int ans=0;
        for(auto i:t)arr[i-'a']++;
        for(auto i:s){
            if(arr[i-'a'])arr[i-'a']--;
            else ans++;
        }
        return ans;
    }
};