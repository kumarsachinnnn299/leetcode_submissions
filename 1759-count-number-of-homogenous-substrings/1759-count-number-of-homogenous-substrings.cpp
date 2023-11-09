//Done

class Solution {
public:
    int mod=1e9+7;
    int countHomogenous(string s) {
        string temp;
        temp+=s[0];
        int ans=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==temp[temp.size()-1])temp+=s[i];
            else{
                int l=temp.size()%mod;
                int sum=(1LL*l*(l+1))%mod;
                sum/=2;
                ans+=sum;
                ans%=mod;
                temp=s[i];
            }
        }
        
                int l=temp.size()%mod;
                int sum=(1LL*l*(l+1))%mod;
                sum/=2;
                ans+=sum;
                ans%=mod;
                // temp=s[i];
        return ans;
    }
};