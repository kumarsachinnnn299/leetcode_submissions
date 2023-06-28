//ND
//

class Solution {
public:
double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        unordered_map<int,vector<pair<int,double>>> adj;
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[edges[i][0]].push_back({edges[i][1],succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0],succProb[i]});
        }
        priority_queue<pair<double,int>> pq;
        pq.push({1.0,start});
        vector<double> prob(n+1,0.0);
        prob[start] = 1.0;
        while(pq.size()){
            pair<double,int> temp = pq.top();
            int curr =  temp.second;
            double curr_prob = temp.first;
            pq.pop();
            if(curr==end){
                return curr_prob;
            }
           
            for(auto [j,next]:adj[curr]){
              double new_prob = curr_prob*next;
                if(new_prob > prob[j]){
                    prob[j] = new_prob;
                    pq.push({prob[j],j});
                }
                
            }
        }
        return 0.00;
    }
};