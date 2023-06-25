//ND
//https://leetcode.com/problems/count-all-possible-routes/discuss/3679721/C%2B%2B-oror-Easy-solution-using-Memoization
class Solution {
    int mod=1e9+7;
private:
    int solve(vector<int>& location,int fuel,int start,int finish,vector<vector<int>>& dp)
    {
        //Get the size of the array
        int n=location.size();
        //Base case
        if(fuel<0)
            return 0;

        //Check if already calculated
        if(dp[start][fuel]!=-1)
            return dp[start][fuel];
        //Initialize the answer
        int ans=0;
        //If we have reached the finish then increase the answer 
        if(start==finish)
            ans++;

        //Check for other answers if there is fuel left
        for(int i=0;i<n;i++)
        {
            //If fuel is less than the distance and it is not the same location then add it to answer
            if(start!=i && abs(location[i]-location[start])<=fuel)
            {
                ans+=solve(location,fuel-abs(location[i]-location[start]),i,finish,dp)%mod;
                ans%=mod;
            }
        }
        //Memoization
        return dp[start][fuel]=ans%mod;
    }
public:
    int countRoutes(vector<int>& locations, int start, int finish, int fuel) 
    {
        //Get the size of the locations
        int n=locations.size();
        //Declare a DP to store the answers
        vector<vector<int>> dp(n,vector<int>(fuel+1,-1));
        //Call the function
        return solve(locations,fuel,start,finish,dp);           
    }
};