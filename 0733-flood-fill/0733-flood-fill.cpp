class Solution {
public:
    
    int xm[4]={-1,1,0,0};
    int ym[4]={0,0,1,-1};
    
    void helper(int r,int c,int color,vector<vector<int>>&arr,int ic,vector<vector<int>>&vis)
    {
        if(r>=arr.size()||c>=arr[0].size()||r<0||c<0)return;
        if(arr[r][c]!=ic||vis[r][c])return;
        arr[r][c]=color;
        vis[r][c]=1;
        for(int i=0;i<4;i++)
        {   
            int x=r+xm[i];
            int y=c+ym[i];
             
                 helper(x,y,color,arr,ic,vis);
            
           
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& arr, int sr, int sc, int color) {
        vector<vector<int>>vis(arr.size(),vector<int>(arr[0].size()));
        int ic=arr[sr][sc];
        helper(sr,sc,color,arr,ic,vis);
        return arr;
    }
};