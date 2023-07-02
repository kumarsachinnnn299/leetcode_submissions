// https://www.youtube.com/watch?v=197bNuyvWkk

class Solution {
public:
    
    void helper(int idx, int len, vector<vector<int>>& requests,vector<int>&arr,int &ans)
    {
        if(idx==requests.size())
        {
            for(auto i:arr)if(i!=0)return;
            ans=max(ans,len);
            return;
        }
        
        //Do not consider request
        helper(idx+1, len,requests,arr,ans);
        
        //consider
        arr[requests[idx][0]]--;
        arr[requests[idx][1]]++;
        helper(idx+1,len+1,requests,arr,ans);
         arr[requests[idx][0]]++;
        arr[requests[idx][1]]--;
        
    }
    
    int maximumRequests(int n, vector<vector<int>>& requests) {
        vector<int>arr(n);
        int ans=0;
        helper(0,0,requests,arr,ans);
            return ans;
    }
};