class Solution {
public:
    
    int countone(vector<int>&arr)
    {   
        int temp=0;
        int s=0,e=arr.size()-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(arr[mid]){
                
                temp=mid+1;
                s++;
            }
            else e--;
        }
        return temp;
        
    }
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m=mat.size(),n=mat[0].size();
        vector<int>ans;
        vector<pair<int,int>>count;
        for(int i=0;i<m;i++)
        {
            int c=countone(mat[i]);
            
            // cout<<c<<endl;
            
            count.push_back({c,i});
        }
        sort(count.begin(),count.end());
        for(int i=0;i<k;i++)ans.push_back(count[i].second);
        return ans;
        
    }
};