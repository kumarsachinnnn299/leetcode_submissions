//By kernighams algo
//https://www.youtube.com/watch?v=I475waWiTK4&list=PL-Jc9J83PIiFJRioti3ZV7QabwoJK6eKe&index=3

class Solution {
public:
    vector<int> countBits(int n) {
        
      vector<int>ans;
        ans.push_back(0);
        for(int i=1;i<=n;i++)
        {
            int x=i;
            int rmsb_mask=x&(-1*x);
            int c=0;
            while(true)
            {
                c++;
                x-=rmsb_mask;
                if(x==0)break;
                rmsb_mask=x&(-1*x);
            }
            ans.push_back(c);
        }
        return ans;
    }
};