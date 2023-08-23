// https://www.youtube.com/watch?v=wZENBuWh-C0&t=794s

class Solution {
public:
    string reorganizeString(string s) {
        
       vector<int>hash(26);
        for(auto i:s)hash[i-'a']++;
        int max=0,letter;
        for(int i=0;i<hash.size();i++)
        {
            if(hash[i]>max){
                max=hash[i];
                letter=i;
            }
        }
        
       
        if(max>((s.size()+1)/2))return "";
        int n=s.size();
         vector<char>res(n);
        
        string ans="";
        int idx=0;
        while(hash[letter])
        {
           res[idx]=char('a'+letter);
            idx+=2;
            hash[letter]--;
        }
        
       
        for(int i=0;i<26;i++)
        {
            while(hash[i])
            {
                if(idx>=res.size())idx=1;
                res[idx]=char('a'+i);
                hash[i]--;
                idx+=2;
            }
            
        }
        for(int i=0;i<res.size();i++)ans+=res[i];
        
        return ans;
        
    }
};