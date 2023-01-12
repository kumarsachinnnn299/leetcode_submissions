/*
Start traversing the tree and each node should return a vector to its parent node.
The vector should be of length 26 and have the count of all the labels in the sub-tree of this node.
*/
class Solution {
    unordered_map<int, vector<int>> adjList;
    vector<int> result;
    string labels;
public:
    
    //Returns count of all the labels in the sub-tree of this node.
    //And sets result for the node in the result.
    vector<int> cstHelper(int node, vector<int> &charCount){
        result[node]=1;
        for(int i=0;i<adjList[node].size();i++){
            //Visit only unvisited nodes.
            if(result[adjList[node][i]]==0){
                vector<int> charCountNew(26,0);
                //I don't want values to propagate between childs. Hence new copy. 
				//Child don't need parent values anyways.
                cstHelper(adjList[node][i], charCountNew);
				//But child must share count values with parent, Hence adding to parent array.
                for(int j=0;j<26;j++)
                    charCount[j]+=charCountNew[j];
            }
        }
        charCount[labels[node]-'a']++;
        result[node]=charCount[labels[node]-'a'];
        return charCount;
    }
    
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string l) {
        result.resize(n,0);
        labels=l;
        vector<int> charCount(26,0);
        for(int i=0;i<edges.size();i++){
            adjList[edges[i][0]].push_back(edges[i][1]);
            adjList[edges[i][1]].push_back(edges[i][0]);
        }
        cstHelper(0, charCount);
        return result;
    }
};