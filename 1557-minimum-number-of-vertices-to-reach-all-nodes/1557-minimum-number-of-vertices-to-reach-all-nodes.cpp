//Very easy
//Jinpe koi incident nhi h edge unhe include krna imp h

class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        
        vector<int>arr(n);
        vector<int>ans;
        for(auto i:edges)
        {
            arr[i[1]]=1;
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)ans.push_back(i);
        }
        return ans;
    }
};