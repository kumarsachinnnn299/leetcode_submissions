class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(auto i:words)
        {
            string temp=i;
            reverse(temp.begin(),temp.end());
            if(temp==i)return i;
        }
        return "";
    }
};