class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>arr(26),arr2(26);
        vector<string>ans;
        for(auto i:words[0])arr[i-'a']++;
        for(int i=1;i<words.size();i++)
        {
            for(auto j:words[i])
            {
                arr2[j-'a']++;
            }
            for(int j=0;j<26;j++)
            {
                arr[j]=min(arr[j],arr2[j]);
                arr2[j]=0;
                
            }
            
        }
        for(int i=0;i<26;i++)
        {
            int c=arr[i];
            while(c--)
            {
                char c='a'+i;
                string s;
                s=c;
                ans.push_back(s);
            }
        }
        return ans;
       
       
    }
};