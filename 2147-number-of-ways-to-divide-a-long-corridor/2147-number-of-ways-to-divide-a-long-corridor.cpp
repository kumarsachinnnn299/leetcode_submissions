class Solution {
public:
    
   //P&C ka question
    //https://www.youtube.com/watch?v=WrcIka-QnZc
    int numberOfWays(string s) {
        
        int mod=1e9+7;
        int cnt=0;
        for(auto i:s)if(i=='S')cnt++;
        if(cnt==0||cnt%2)return 0;
      int c=0;
        
        long long ans=1;
        for(int i=0;i<s.size();i++)
        {
           if(s[i]=='S')c++;
            if(c==2)
            {   int temp=1;
             i++;
                while(i<s.size()&&s[i]=='P'){
                    temp++;
                    i++;
                }
             if(i==s.size())break;
             ans=(ans*temp)%mod;
             c=0;
             i--;
            }
            
        }
        return ans;
        

    }
};