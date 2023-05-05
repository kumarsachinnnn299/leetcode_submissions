class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        vector<int>ans;
        int c1=0,c2=arr[0].size(),r1=0,r2=arr.size();
        while(c1<c2&&r1<r2)
        {
            for(int i =c1;i<c2;i++)
            {
                ans.push_back(arr[r1][i]);
            }
            r1++;
            for(int i=r1;i<r2;i++)
            {
                ans.push_back(arr[i][c2-1]);
            }
            c2--;
            
            if(r1<r2)
            {
                for(int i=c2-1;i>=c1;i--)
                {
                    ans.push_back(arr[r2-1][i]);
                }
                 r2--;
            }
           
            if(c1<c2)
            {
                for(int i=r2-1;i>=r1;i--)
                {
                    ans.push_back(arr[i][c1]);
                }
                c1++;
            }
            
        }
        return ans;
    }
};