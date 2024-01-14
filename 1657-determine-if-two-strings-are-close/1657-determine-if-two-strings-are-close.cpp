class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n1=word1.size(),n2=word2.size();
        if(n1!=n2)return false;
        int c=0;
        vector<int>arr1(26),arr2(26),c1,c2;
        for(auto i:word1)arr1[i-'a']++;
        for(auto i:word2)arr2[i-'a']++;
        string temp1,temp2;
        for(int i=0;i<26;i++)
        {
            if(arr1[i]&&!arr2[i]||arr2[i]&&!arr1[i])return false;
            c1.push_back(arr1[i]);
            c2.push_back(arr2[i]);
        }
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        return arr1==arr2;
    }
};