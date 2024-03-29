
// https://leetcode.com/problems/minimum-time-to-collect-all-apples-in-a-tree/discuss/623679/C%2B%2B-Short-and-simple-DFS

class Solution {
public:
    vector<vector<int>> adjList;
    int dfs(vector<bool>& hasApple,int node,int d,int prev)
    {
        int result=0,temp;
        for(int &i:adjList[node])
	    if(i!=prev)
	    {
	        temp=dfs(hasApple,i,d+1,node);
	        if(temp)			
		    result+=temp-d;
	    }
        return result||hasApple[node]?result+d:0;  
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) 
    {
        adjList.resize(n);
        for(auto i:edges)
        {
          adjList[i[0]].push_back(i[1]);
        adjList[i[1]].push_back(i[0]);  
        }
            
        
        return dfs(hasApple,0,0,-1)*2;     
    }
};