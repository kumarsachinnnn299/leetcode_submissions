// https://leetcode.com/problems/lexicographically-smallest-equivalent-string/discuss/3047721/Easy-C%2B%2B-Solution-Using-Array-(Without-Union-Find)

class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        vector<char>arr(26);
        // string ans=";"
        for(int i=0;i<26;i++)
        {
            arr[i]='a'+i;
        }
        
       for(int i=0;i<s1.size();i++)
       {
           char replacable=max(arr[s1[i]-'a'],arr[s2[i]-'a']);
           char replacedwith=min(arr[s1[i]-'a'],arr[s2[i]-'a']);
           for(int i=0;i<26;i++)
           {
               if(arr[i]==replacable)arr[i]=replacedwith;
           }
       }
        for(int i=0;i<baseStr.size();i++)
        {
             baseStr[i] = arr[baseStr[i]-'a'];
        }
        return baseStr;
    }
};