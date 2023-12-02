class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int>arr1(26),arr2(26);
        for(auto i:chars)arr1[i-'a']++;
        int ans=0;
        for(auto i:words)
        {
            arr2=arr1;
            for(int j=0;j<i.size();j++)
            {
                if(arr2[i[j]-'a']==0)break;
                if(j==i.size()-1)ans+=i.size();
                arr2[i[j]-'a']--;
            }
        }
        return ans;
        
    }
};