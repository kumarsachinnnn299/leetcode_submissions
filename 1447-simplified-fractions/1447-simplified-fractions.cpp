class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string>ans;
        map<float,int>mp;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {   
                if(mp[(float)i/(float)j]==0){
                      string temp="";
                temp+=to_string(i);
                temp+='/';
                temp+=to_string(j);
                ans.push_back(temp);
                    mp[(float)i/(float)j]=1;
                    
                }
              
            }
        }
        
        for(auto i:mp)cout<<i.first<<' '<<i.second<<endl;
        
        return ans;
        
    }
};