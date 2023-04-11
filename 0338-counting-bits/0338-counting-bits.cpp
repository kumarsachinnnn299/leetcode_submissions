//By kernighams algo
//https://www.youtube.com/watch?v=I475waWiTK4&list=PL-Jc9J83PIiFJRioti3ZV7QabwoJK6eKe&index=3

class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int>ans;
        ans.push_back(0);
        for(int i=1;i<=n;i++)
        {
            int c=0;
            int x=i;
            int mask=x&(-1*x);
            while(true)
            {   
                c++;
                x-=mask;
             if(x==0)break;
                mask=(x&(-1*x));
            }
            ans.push_back(c);
        }
        return ans;
        
        
    }
};