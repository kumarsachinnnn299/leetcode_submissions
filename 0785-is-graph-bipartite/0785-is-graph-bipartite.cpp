// https://www.youtube.com/watch?v=-SpTh4AEZrk
//Union find
//Graph coloring by dfs or bfs

//Here we use graph color with dfs
//1-> blur
// 0->not color
//-1 -> red

class Solution {
public:
    
    bool validcolor(vector<vector<int>>& graph,vector<int>& color, int reqcolor,int node)
    {
        if(color[node]!=0)
        {
            return color[node]==reqcolor;
        }
        color[node]=reqcolor;
        for(auto i:graph[node])
        {
            if(!validcolor(graph,color,-reqcolor,i))return false;
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        
        vector<int>color(graph.size());
        for(int i=0;i<graph.size();i++)
        {
            if(color[i]==0&&!validcolor(graph,color,1,i))return false;
        }
        return true;
        
    }
};