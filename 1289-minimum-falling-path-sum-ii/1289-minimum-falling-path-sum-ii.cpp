// https://www.youtube.com/watch?v=N913Vsbfiws
//Not very hard easy basic dp question of memoization
// https://leetcode.com/problems/minimum-falling-path-sum-ii/discuss/3468712/easiest-solution-c%2B%2B-oror-easy-oror

class Solution {
public:
    
    int dp[205][205];
    int ok(vector<vector<int>>& arr , int r, int c){
        int n=arr.size();
        if(r>=n) return 0;
        if(dp[r][c]!=-1) return dp[r][c];
        int ans=INT_MAX;
      
        for(int i=0;i<n;i++){
            if(i!=c) ans=min(ans,ok(arr,r+1,i));
        }
        
        if(ans!=INT_MAX)return dp[r][c]=ans+arr[r][c];
        return dp[r][c];
    }
    
    int minFallingPathSum(vector<vector<int>>& arr) {
        int n=arr.size();
        if(n==1)return arr[0][0];
        memset(dp,-1,sizeof(dp));
        int ans=INT_MAX;
        for(int i=0;i<n;i++) ans=min(ans,ok(arr,0,i));
        return ans;
    }
};