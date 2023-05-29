// https://www.youtube.com/watch?v=k5ZGK5LdRDU
//Recursion

class Solution {
public:
    
    bool isvalid(string square,int n,int idx)
    {
       if(idx==square.size()&&n==0)return true;

      
        for(int i=idx;i<square.size();i++)
        {
            int temp=stoi(square.substr(idx,i-idx+1));
            if(temp>n)break;
            if(isvalid(square,n-temp,i+1))return true;
        }
        return false;

    }
    
    int punishmentNumber(int n) {
       int ans=0;
        for(int i=1;i<=n;i++)
        { 
            int n=i*i;
            string s=to_string(n);
            
            if(isvalid(s,i,0)){
                ans+=n;
            }
           
        }
        return ans;
    }
};