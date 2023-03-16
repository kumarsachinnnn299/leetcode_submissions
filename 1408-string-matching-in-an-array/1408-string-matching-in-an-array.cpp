class Solution {
public:
    
    // bool issubstring(string small,string large)
    // {
    //     if(large.find(small)!=-1)return true;
    //     return false;
    // }
    
    vector<string> stringMatching(vector<string>& words) {
        vector<string>ans;
        sort(words.begin(),words.end(),[](const string  &s1,const string & s2){
            return s1.size()<s2.size();
        });
      
        for(int i=0;i<words.size();i++)
        {
            for(int j=i+1;j<words.size();j++)
            {
                
                    if(words[j].find(words[i])!=-1){
                        ans.push_back(words[i]);
                    break;}
                
                
            }
        }
        return ans;
    }
};