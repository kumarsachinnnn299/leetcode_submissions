class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        int minlen=INT_MAX;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int l=arr[i].size();
            minlen=min(minlen,l);
            
        }
        string ans="";
        for(int i=0;i<minlen;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(arr[j][i]!=arr[j-1][i]){
                   if(ans.size()==0)return "";
                    return ans;
                    
                }
            }
            ans+=arr[0][i];
        }
        if(ans.size()==0)return "";
        return ans;
    }
};